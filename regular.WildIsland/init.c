void main()
{
    CreateHive();
	GetHive().InitOffline();
    
    // Default weather setup
    Weather weather = g_Game.GetWeather();
    weather.MissionWeather(false);    // false = don't use dynamic weather
    weather.GetOvercast().Set(0.3, 0, 0);
    weather.GetRain().Set(0, 0, 0);
    weather.GetFog().Set(0.1, 0, 0);

    // Force a specific date and morning time (08:00)
    int year = 2025;
    int month = 6;
    int day = 7;
    int hour = 8;
    int minute = 0;

    GetGame().GetWorld().SetDate(year, month, day, hour, minute);
}

class CustomMission: MissionServer
{
    // Required with current CfgPlayerSpawnpoints.xml configuration
    override bool WI_EnableSpawnSelection()
	{
		return true;
	}
}

Mission CreateCustomMission(string path)
{
    return new CustomMission();
}
