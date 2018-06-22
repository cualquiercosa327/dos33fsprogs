/*	Map

	0         1          2        3

0     BEACH     ARCTIC   ARCTIC        BELAIR
                TREE    MOUNTAIN

1     BEACH     LANDING   GRASS      FOREST
      PINETREE            MOUNTAIN

2     BEACH     GRASS     GRASS       FOREST
      PALMTREE            MOUNTAIN

3     BEACH     DESERT    COLLEGE      BEACH
                CACTUS   PARK
*/


struct map_info_type map_info[33] = {
	[NORTH_BEACH]={		// 0: NORTH_BEACH
		.name="North Beach",
		.n_exit=NOEXIT,
		.s_exit=PINE_BEACH,
		.e_exit=ARCTIC_WOODS,
		.w_exit=NOEXIT,
		.miny=4,
		.ground_color=(COLOR_WHITE|(COLOR_WHITE<<4)),
		.land_type=LAND_LEFT_BEACH|LAND_NORTHSHORE,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[ARCTIC_WOODS]={	// 1: ARCTIC_WOODS
		.name="Arctic Woods",
		.n_exit=NOEXIT,
		.s_exit=LANDING_SITE,
		.e_exit=ARCTIC_MOUNTAINS,
		.w_exit=NORTH_BEACH,
		.miny=4,
		.ground_color=(COLOR_WHITE|(COLOR_WHITE<<4)),
		.land_type=LAND_GRASSLAND|LAND_NORTHSHORE,
		.scatter=SCATTER_SNOWYPINE,
		.scatter_x=10, .scatter_y=22, .scatter_cutoff=22,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[ARCTIC_MOUNTAINS]={	// 2: ARCTIC_MOUNTAINS
		.name="Arctic Mountains",
		.n_exit=NOEXIT,
		.s_exit=NORTH_MOUNTAIN,
		.e_exit=HARFORD_COUNTY,
		.w_exit=ARCTIC_WOODS,
		.miny=4,
		.ground_color=(COLOR_WHITE|(COLOR_WHITE<<4)),
		.land_type=LAND_MOUNTAIN|LAND_NORTHSHORE,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[HARFORD_COUNTY]={	// 3: HARFORD_COUNTY
		.name="Harford County",
		.n_exit=NOEXIT,
		.s_exit=NORTH_FOREST,
		.e_exit=NOEXIT,
		.w_exit=ARCTIC_MOUNTAINS,
		.miny=4,
		.ground_color=(COLOR_LIGHTBLUE|(COLOR_LIGHTBLUE<<4)),
		.land_type=LAND_LIGHTNING,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=harfco_rle,
		.num_locations=1,
		.location[0] = {
			.name="Bel Air",
			.x0 = 11, .x1 = 29,
			.y0 = 16,  .y1 = 26,
			.destination = BEL_AIR,
		},
	},
	[PINE_BEACH]={	// 4: PINE_BEACH
		.name="Pine Beach",
		.n_exit=NORTH_BEACH,
		.s_exit=PALM_BEACH,
		.e_exit=LANDING_SITE,
		.w_exit=NOEXIT,
		.miny=4,
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.scatter=SCATTER_PINE,
		.scatter_x=25, .scatter_y=16, .scatter_cutoff=15,
		.land_type=LAND_LEFT_BEACH,
		.entry_type=ENTRY_MINX, .entry_x=11, .entry_y=0,
		.background_image=NULL,
	},
	[LANDING_SITE]={	// 5: LANDING_SITE
		.name="Landing Site",
		.num_locations=1,
		// .locations
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=ARCTIC_WOODS,
		.s_exit=GRASSLAND,
		.e_exit=NORTH_MOUNTAIN,
		.w_exit=PINE_BEACH,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_GRASSLAND,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=landing_rle,
	},
	[NORTH_MOUNTAIN]={	// 6: NORTH_MOUNTAIN
		.name="North Mountain",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=ARCTIC_MOUNTAINS,
		.s_exit=MORIA,
		.e_exit=NORTH_FOREST,
		.w_exit=LANDING_SITE,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_MOUNTAIN,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[NORTH_FOREST]={	// 7: NORTH_FOREST
		.name="North Forest",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=HARFORD_COUNTY,
		.s_exit=SOUTH_FOREST,
		.e_exit=NOEXIT,
		.w_exit=NORTH_MOUNTAIN,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_FOREST|LAND_RIGHT_BEACH,
		.entry_type=ENTRY_MAXX, .entry_x=27, .entry_y=0,
		.background_image=NULL,
	},
	[PALM_BEACH]={	// 8: PALM_BEACH
		.name="Palm Beach",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=PINE_BEACH,
		.s_exit=SOUTH_BEACH,
		.e_exit=GRASSLAND,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_PALM,
		.scatter_x=10, .scatter_y=20, .scatter_cutoff=22,
		.land_type=LAND_LEFT_BEACH,
		.entry_type=ENTRY_MINX, .entry_x=11, .entry_y=0,
		.background_image=NULL,
	},
	[GRASSLAND]={	// 9: GRASSLAND
		.name="Grassland",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=LANDING_SITE,
		.s_exit=CACTUS_RANCH,
		.e_exit=MORIA,
		.w_exit=PALM_BEACH,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_GRASSLAND,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[MORIA]={	// 10: MORIA
		.name="Khazad-dum",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=NORTH_MOUNTAIN,
		.s_exit=COLLEGE_PARK,
		.e_exit=SOUTH_FOREST,
		.w_exit=GRASSLAND,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_MOUNTAIN,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[SOUTH_FOREST]={	// 11: SOUTH_FOREST
		.name="South Forest",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=NORTH_FOREST,
		.s_exit=OCEAN_CITY,
		.e_exit=NOEXIT,
		.w_exit=MORIA,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_FOREST|LAND_RIGHT_BEACH,
		.entry_type=ENTRY_MAXX, .entry_x=27, .entry_y=0,
		.background_image=NULL,
	},
	[SOUTH_BEACH]={	// 12: SOUTH_BEACH
		.name="South Beach",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=PALM_BEACH,
		.s_exit=NOEXIT,
		.e_exit=CACTUS_RANCH,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_PALM,
		.scatter_x=20, .scatter_y=20, .scatter_cutoff=22,
		.land_type=LAND_LEFT_BEACH|LAND_SOUTHSHORE,
		.entry_type=ENTRY_MINX, .entry_x=11, .entry_y=0,
		.background_image=NULL,
	},
	[CACTUS_RANCH]={	// 13: CACTUS_RANCH
		.name="Cactus Ranch",
		.ground_color=(COLOR_ORANGE|(COLOR_ORANGE<<4)),
		.n_exit=GRASSLAND,
		.s_exit=NOEXIT,
		.e_exit=COLLEGE_PARK,
		.w_exit=SOUTH_BEACH,
		.miny=4,
		.scatter=SCATTER_CACTUS,
		.scatter_x=25, .scatter_y=16, .scatter_cutoff=15,
		.land_type=LAND_GRASSLAND|LAND_SOUTHSHORE,
		.entry_type=ENTRY_NORMAL, .entry_x=0, .entry_y=0,
		.background_image=NULL,
	},
	[COLLEGE_PARK]={	// 14: COLLEGE_PARK
		.name="College Park",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=MORIA,
		.s_exit=NOEXIT,
		.e_exit=OCEAN_CITY,
		.w_exit=CACTUS_RANCH,
		.miny=2,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_MAXY, .entry_x=0, .entry_y=6,
		.background_image=collegep_rle,
		.num_locations=2,
		.location[0] = {
			.name="University of M",
			.x0 = 12, .x1 = 28,
			.y0 = 0,  .y1 = 20,
			.destination = U_OF_MD,
		},
		.location[1] = {
			.name="Waterfall",
			.x0 = 27, .x1 = 39,
			.y0 = 18, .y1 = 33,
			.destination = WATERFALL,
		},
	},
	[OCEAN_CITY]={	// 15: OCEAN_CITY
		.name="Ocean City",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=SOUTH_FOREST,
		.s_exit=NOEXIT,
		.e_exit=NOEXIT,
		.w_exit=COLLEGE_PARK,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_RIGHT_BEACH|LAND_SOUTHSHORE,
		.entry_type=ENTRY_MAXX, .entry_x=27, .entry_y=0,
		.background_image=NULL,
	},
	[U_OF_MD]={	// 16: U of MD
		.name="University of M",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=NOEXIT,
		.s_exit=COLLEGE_PARK,
		.e_exit=COLLEGE_PARK,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_BORING,
		.entry_type=ENTRY_R_OR_L, .entry_x=0, .entry_y=0,
		.background_image=umcp_rle,
		.num_locations=4,
		.location[0] = {
			.name="Talbot Hall",
			.x0 = 0,  .x1 = 10,
			.y0 = 18, .y1 = 31,
			.destination = TALBOT_HALL,
			.type=LOCATION_PLACE,
		},
		.location[1] = {
			.name="Dining Hall",
			.x0 = 13, .x1 = 26,
			.y0 = 10, .y1 = 24,
			.destination = DINING_HALL,
			.type=LOCATION_PLACE,
		},
		.location[2] = {
			.name="Metro Station",
			.x0 = 30, .x1 = 39,
			.y0 = 10, .y1 = 39,
			.destination = METRO_STATION,
			.type=LOCATION_PLACE,
		},
		.location[3] = {
			.name="Fountain",
			.x0 = 14, .x1 = 29,
			.y0 = 28, .y1 = 39,
			.destination = FOUNTAIN,
			.type=LOCATION_PLACE,
		},
	},
	[WATERFALL]={	// 17: Waterfall
		.name="Waterfall",
		.ground_color=(COLOR_GREY|(COLOR_GREY<<4)),
		.n_exit=NOEXIT,
		.s_exit=NOEXIT,
		.e_exit=NOEXIT,
		.w_exit=COLLEGE_PARK,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_BORING,
		.entry_type=ENTRY_EXPLICIT, .entry_x=4, .entry_y=14,
		.background_image=waterfall_rle,
	},
	[TALBOT_HALL]={	// 18: Talbot Hall
		.name="Talbot Hall",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=U_OF_MD,
		.e_exit=NOEXIT,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_SPOOL,
		.scatter_x=16, .scatter_y=22, .scatter_cutoff=22,
		.land_type=LAND_BORING,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=talbot_rle,
		.num_locations=5,
		.location[0] = {
			.name="Liz and Will",
			.x0 = 8,  .x1 = 12,
			.y0 = 22, .y1 = 38,
			//.destination = TALBOT_HALL,
			.type=LOCATION_CONVERSATION,
		},
		.location[1] = {
			.name="Pete",
			.x0 = 13,  .x1 = 19,
			.y0 = 15, .y1 = 21,
			//.destination = TALBOT_HALL,
			.type=LOCATION_CONVERSATION,
		},
		.location[2] = {
			.name="Kenjesu",
			.x0 = 21,  .x1 = 26,
			.y0 = 19, .y1 = 28,
			//.destination = TALBOT_HALL,
			.type=LOCATION_CONVERSATION,
		},
		.location[3] = {
			.name="Mathemagician",
			.x0 = 28,  .x1 = 34,
			.y0 = 20, .y1 = 28,
			//.destination = TALBOT_HALL,
			.type=LOCATION_CONVERSATION,
		},
		.location[4] = {
			.name="Darth Tater",
			.x0 = 28,  .x1 = 36,
			.y0 = 30, .y1 = 38,
			//.destination = TALBOT_HALL,
			.type=LOCATION_CONVERSATION,
		},
	},
	[DINING_HALL]={	// 19: Dining Hall
		.name="Dining Hall",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=U_OF_MD,
		.e_exit=NOEXIT,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_BORING,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=dining_rle,
		.num_locations=5,
		.location[0] = {
			.name="Lunch Lady",
			.x0 = 4,   .x1 = 10,
			.y0 = 22,  .y1 = 35,
			.type=LOCATION_CONVERSATION,
		},
		.location[1] = {
			.name="Elaine",
			.x0 = 12,  .x1 = 18,
			.y0 = 21,  .y1 = 30,
			.type=LOCATION_CONVERSATION,
		},
		.location[2] = {
			.name="Oscar",
			.x0 = 21, .x1 = 26,
			.y0 = 29, .y1 = 36,
			.type=LOCATION_CONVERSATION,
		},
		.location[3] = {
			.name="Cindy",
			.x0 = 27,  .x1 = 31,
			.y0 = 29,  .y1 = 36,
			.type=LOCATION_CONVERSATION,
		},
		.location[4] = {
			.name="Nicole",
			.x0 = 32,  .x1 = 39,
			.y0 = 28,  .y1 = 38,
			.type=LOCATION_CONVERSATION,
		},
	},
	[METRO_STATION]={	// 20: METRO_STATION
		.name="Metro Station",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=U_OF_MD,
		.e_exit=NOEXIT,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_BORING,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=metro_rle,
		.num_locations=4,
		.location[0] = {
			.name="Station Master",
			.x0 = 10,  .x1 = 16,
			.y0 = 26,  .y1 = 35,
			.type=LOCATION_CONVERSATION,
		},
		.location[1] = {
			.name="Large Bird",
			.x0 = 26,  .x1 = 33,
			.y0 = 16,  .y1 = 20,
			.type=LOCATION_CONVERSATION,
		},
		.location[2] = {
			.name="Giant Guinea Pig",
			.x0 = 28, .x1 = 33,
			.y0 = 22, .y1 = 30,
			.type=LOCATION_CONVERSATION,
		},
		.location[3] = {
			.name="Tiny Capabara",
			.x0 = 33,  .x1 = 38,
			.y0 = 30,  .y1 = 38,
			.type=LOCATION_CONVERSATION,
		},
	},
	[FOUNTAIN]={	// 21: FOUNTAIN
		.name="Fountain",
		.ground_color=(COLOR_LIGHTGREEN|(COLOR_LIGHTGREEN<<4)),
		.n_exit=NOEXIT,
		.s_exit=NOEXIT,
		.e_exit=U_OF_MD,
		.w_exit=U_OF_MD,
		.miny=4,
		.scatter=SCATTER_NONE,
		.land_type=LAND_BORING,
		.entry_type=ENTRY_EXPLICIT, .entry_x=4, .entry_y=14,
		.background_image=fountain_rle,
		.num_locations=1,
		.location[0] = {
			.name="Mermaid",
			.x0 = 8,  .x1 = 20,
			.y0 = 20, .y1 = 38,
			.type=LOCATION_CONVERSATION,
		},
	},
	[BEL_AIR]={	// 22: BEL_AIR
		.name="Bel Air",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=HARFORD_COUNTY,
		.e_exit=NOEXIT,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=belair_rle,
		.num_locations=4,
		.location[0] = {
			.name="C. Milton HS",
			.x0 = 0, .x1 = 9,
			.y0 = 20,  .y1 = 30,
			.type=LOCATION_CONVERSATION,
		},
		.location[1] = {
			.name="JC Highschool",
			.x0 = 10, .x1 = 24,
			.y0 = 16, .y1 = 24,
			.destination = JOHN_CARROLL,
		},
		.location[2] = {
			.name="Harford Mall",
			.x0 = 25, .x1 = 32,
			.y0 = 22, .y1 = 28,
			.type=LOCATION_CONVERSATION,
		},
		.location[3] = {
			.name="Minigolf",
			.x0 = 32, .x1 = 39,
			.y0 = 27, .y1 = 35,
			.type=LOCATION_CONVERSATION,
		},
	},
	[JOHN_CARROLL]={	// 23: John Carroll
		.name="JC School",
		.ground_color=(COLOR_DARKGREEN|(COLOR_DARKGREEN<<4)),
		.n_exit=NOEXIT,
		.s_exit=BEL_AIR,
		.e_exit=BEL_AIR,
		.w_exit=BEL_AIR,
		.miny=4,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=jc_rle,
		.num_locations=3,
		.location[0] = {
			.name="Main Office",
			.x0 = 12, .x1 = 15,
			.y0 = 10,  .y1 = 22,
			.destination=JC_OFFICE,
			.type=LOCATION_PLACE,
		},
		.location[1] = {
			.name="Upstairs",
			.x0 = 21, .x1 = 25,
			.y0 = 10, .y1 = 22,
			.destination=JC_UPSTAIRS,
			.type=LOCATION_PLACE,
		},
		.location[2] = {
			.name="Downstairs",
			.x0 = 26, .x1 = 31,
			.y0 = 10, .y1 = 24,
			.destination=JC_DOWNSTAIRS,
			.type=LOCATION_PLACE,
		},
	},
	[JC_UPSTAIRS]={	// 24: JC_UPSTAIRS
		.name="JC Upstairs",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=JOHN_CARROLL,
		.e_exit=NOEXIT,
		.w_exit=JOHN_CARROLL,
		.miny=4,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=jc_hallway_rle,
		.num_locations=3,
		.location[0] = {
			.name="Video Homeroom",
			.x0 = 2, .x1 = 9,
			.y0 = 10,  .y1 = 18,
			.destination=VIDEO_HOMEROOM,
			.type=LOCATION_PLACE,
		},
		.location[1] = {
			.name="Homeroom 12E",
			.x0 = 18, .x1 = 24,
			.y0 = 14, .y1 = 25,
			.destination=HOMEROOM,
			.type=LOCATION_PLACE,
		},
		.location[2] = {
			.name="Deutsch Klasse",
			.x0 = 27, .x1 = 34,
			.y0 = 23, .y1 = 35,
			.destination=DEUTSCH,
			.type=LOCATION_PLACE,
		},
	},
	[JC_DOWNSTAIRS]={	// 25: JC_DOWNSTAIRS
		.name="JC Downstairs",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=JOHN_CARROLL,
		.e_exit=NOEXIT,
		.w_exit=JOHN_CARROLL,
		.miny=4,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=jc_hallway_rle,
		.num_locations=3,
		.location[0] = {
			.name="Patriot Room",
			.x0 = 2, .x1 = 9,
			.y0 = 10,  .y1 = 18,
			.destination=PATRIOT_ROOM,
			.type=LOCATION_PLACE,
		},
		.location[1] = {
			.name="AP Calculus",
			.x0 = 18, .x1 = 24,
			.y0 = 14, .y1 = 25,
			.destination=AP_CALCULUS,
			.type=LOCATION_PLACE,
		},
		.location[2] = {
			.name="Math Office",
			.x0 = 27, .x1 = 34,
			.y0 = 23, .y1 = 35,
			.destination=MATH_OFFICE,
			.type=LOCATION_PLACE,
		},
	},
	[VIDEO_HOMEROOM]={	// 27: VIDEO_HOMEROOM
		.name="Video Homeroom",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=JC_UPSTAIRS,
		.e_exit=NOEXIT,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=video_hr_rle,
		.num_locations=4,
		.location[0] = {
			.name="Gus",
			.x0 = 10, .x1 = 16,
			.y0 = 22,  .y1 = 30,
			.type=LOCATION_CONVERSATION,
		},
		.location[1] = {
			.name="Raistlin",
			.x0 = 17, .x1 = 22,
			.y0 = 22, .y1 = 30,
			.type=LOCATION_CONVERSATION,
		},
		.location[2] = {
			.name="Ford",
			.x0 = 23, .x1 = 28,
			.y0 = 22, .y1 = 30,
			.type=LOCATION_CONVERSATION,
		},
		.location[3] = {
			.name="Sister Scarynun",
			.x0 = 26, .x1 = 32,
			.y0 = 30, .y1 = 39,
			.type=LOCATION_CONVERSATION,
		},
	},
	[MATH_OFFICE]={	// 31: MATH_OFFICE
		.name="Math Office",
		.ground_color=(COLOR_BLACK|(COLOR_BLACK<<4)),
		.n_exit=NOEXIT,
		.s_exit=JC_DOWNSTAIRS,
		.e_exit=NOEXIT,
		.w_exit=NOEXIT,
		.miny=4,
		.scatter=SCATTER_NONE,
		.entry_type=ENTRY_CENTER, .entry_x=0, .entry_y=0,
		.background_image=math_office_rle,
		.num_locations=4,
		.location[0] = {
			.name="Rachael YRBK",
			.x0 = 0, .x1 = 8,
			.y0 = 21,  .y1 = 34,
			.type=LOCATION_CONVERSATION,
		},
		.location[1] = {
			.name="Brighid",
			.x0 = 10, .x1 = 15,
			.y0 = 21, .y1 = 34,
			.type=LOCATION_CONVERSATION,
		},
		.location[2] = {
			.name="Captain Steve",
			.x0 = 15, .x1 = 22,
			.y0 = 21, .y1 = 34,
			.type=LOCATION_CONVERSATION,
		},
		.location[3] = {
			.name="Mree",
			.x0 = 22, .x1 = 28,
			.y0 = 21, .y1 = 34,
			.type=LOCATION_CONVERSATION,
		},
	},


};

#if 0

	calculs_rle:
		team I-1
		JENNI
		MR. APPLEBY
		KATHY
		LIZBETH
		BLUME

	DEUTSCH:
		Agent G
		Agent AP
		Agent S
		NIRE
		FRAU:

	homeroom:
		trapani
		warwick
		wargo
		mean lady

	patriot_room:
		agent N
		PADRINO


#endif


