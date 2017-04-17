#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}      	, {}    , 1      , {}		 , 0    , "%3" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1}  		, {}    , 1      , {}        , 0    , "Headquarters" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3}      	, {5}  	, 1      , {}        , 0    , "Watchtower" },
{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {3}      	, {4}  	, 1      , {}        , 0    , "Comms Array" },
{ 6, TEAM_BLUE, 	SPAWN_NEVER,    {5,4}		, {}    , 1      , {}        , 0    , "Warehouse" },
{ 7, TEAM_BLUE, 	SPAWN_NEVER,    {6}			, {}    , 1      , {}        , 0    , "Crossing" },
{ 8, TEAM_BLUE, 	SPAWN_NEVER,    {7}			, {}    , 1      , {}        , 0    , "Ammo Dump" },
{ 9, TEAM_BLUE, 	SPAWN_NEVER,    {8}			, {}    , 1      , {}        , 0    , "Castle" },

{ 10,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {1,4,5,-2}, 3    , "Marina" },
{ 11,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {9,1}     , 2    , "HIDDEN" },
{ 12,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {4,5,2}   , 3    , "Jetty" },
{ 13,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {1,8}	 , 2    , "HIDDEN" },
{ 14,TEAM_RED, 		SPAWN_NEVER,    {}			, {}    , 1      , {2,4,5}	 , 3    , "HIDDEN" },
{ 15,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {1,7}	 , 2    , "HIDDEN" }
};

