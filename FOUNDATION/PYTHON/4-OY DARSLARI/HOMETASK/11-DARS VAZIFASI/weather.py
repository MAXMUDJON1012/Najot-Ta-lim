import aiohttp

API_KEY = "f38cebc898e6534a06e948165452b0d3"

async def ob_havo_olish(shahar: str, til: str = "uz") -> str:
    url = "https://api.openweathermap.org/data/2.5/weather"
    params = {"q": f"{shahar}, UZ", "appid": API_KEY, "units": "metric", "lang": til}
    
    async with aiohttp.ClientSession() as session:
        async with session.get(url, params=params) as response:
            data = await response.json()
            if response.status != 200:
                if til == "uz":
                    return f"❌ '{shahar}' bo'yicha ob-havo ma'lumoti topilmadi."
                else:
                    return f"❌ No weather data found for '{shahar}'."
            
            temp = data["main"]["temp"]
            his = data["main"]["feels_like"]
            holat = data["weather"][0]["description"]
            namlik = data["main"]["humidity"]
            shamol = data["wind"]["speed"]
            
            if til == "uz":
                return (f"🌍 <b>{shahar}</b> ob-havosi:\n\n"
                        f"🌡 Harorat: <b>{temp}°C</b> (his qilinishi: {his}°C)\n"
                        f"☁️ Holat: {holat.capitalize()}\n"
                        f"💧 Namlik: {namlik}%\n"
                        f"💨 Shamol tezligi: {shamol} m/s")
            else:
                return (f"🌍 Weather in <b>{shahar}</b>:\n\n"
                        f"🌡 Temperature: <b>{temp}°C</b> (feels like: {his}°C)\n"
                        f"☁️ Condition: {holat.capitalize()}\n"
                        f"💧 Humidity: {namlik}%\n"
                        f"💨 Wind speed: {shamol} m/s")