```
LevelNo = (int)Room->pRoomEx->pLevel->LevelNo;
if ( (int)LevelNo < 0 || (int)LevelNo >= SLODWORD(g_DataTables.nLevelsTxtCount) )
v14 = 0i64;
else
v14 = (char *)g_DataTables.N0000094D + 156 * LevelNo;                                   //Get "Automap Layer"
v15 = *((_DWORD *)v14 + 2);                                                             //Layer Number
sub_7FF68E27A080(v15);                                                                  //D2CLIENT_InitAutomapLayer
```