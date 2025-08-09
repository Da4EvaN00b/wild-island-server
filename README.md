[![Steam](https://img.shields.io/badge/Steam-Visit-blue?style=for-the-badge&logo=steam)](https://steamcommunity.com/sharedfiles/filedetails/?id=3491133726)
[![Website](https://img.shields.io/badge/Website-Visit-orange?style=for-the-badge&logo=google-chrome)](https://www.wildisland.info/)
[![Discord](https://img.shields.io/badge/Discord-Join-7289DA?style=for-the-badge&logo=discord&logoColor=white)](https://discord.gg/agBSaabNdv)


# Wild Island Server Files
Welcome to the Wild Island Server Files repo.
This repo contains all the necessary information and files for any Island server hoster.

# Server Installation

**Basics**

* Make sure you have up-to-date *@Wild Island* folders in your server root.
* Copy *yuvalino.bikey* from *Keys* folder to your server root *keys* folder.
* Get `regular.WildIsland` mission alongside `server.cfg` and make sure `enableCfgGameplayFile = 1;`.
* Modify `regular.WildIsland/db/globals.xml` to control unique gameplay mechanics:

```xml
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<variables>
    
    <!-- vanilla variables redacted -->
    
    <var name="WI_Selection_Enabled" type="0" value="1"/> <!-- spawn selection screen -->

    <var name="WI_Airdrop_MinutesInterval" type="0" value="60"/> <!-- interval between drops, value="0" to disable -->
    <var name="WI_Airdrop_MinPlayers" type="0" value="1"/> <!-- minimum players required to for drop to occur -->
    <var name="WI_Airdrop_OpenTime" type="0" value="20"/> <!-- unused -->
    <var name="WI_Airdrop_CrateCleanupLifetime" type="0" value="300"/> <!-- cleanup time in seconds for crate once it landed -->
    <var name="WI_Airdrop_AirplaneSpeed" type="0" value="10"/> <!-- speed of airplane -->
</variables>
```