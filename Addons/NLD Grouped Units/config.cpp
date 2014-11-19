 class CfgPatches {
	class NLD_Units {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
	};
};

class CfgGroups
{

	class West
	{

		class NLD_Units
		{
			name = "NLD Units";

			class Infantry
			{
				name = "Infantry";

				class NLD_WLD_InfSentry
				{
					name = "Sentry (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "NLD_WLD_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WLD_InfTeam
				{
					name = "Team (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WLD_InfSquad
				{
					name = "Squad (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_SL";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_LAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {25,0,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WLD_GL";
						rank = "PRIVATE";
						position[] = {30,0,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WLD_AMMO";
						rank = "PRIVATE";
						position[] = {35,0,0};
					};
				};
				class NLD_WLD_InfCmdr
				{
					name = "Platoon Command (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_CLS";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WLD_InfAtTeam
				{
					name = "Anti-armor Team (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_MAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_MAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AMAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WLD_InfAaTeam
				{
					name = "Anti-air Team (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_AA";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AAA";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WLD_InfLMGTeam
				{
					name = "LMG Team (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AAR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WLD_InfMMGTeam
				{
					name = "MMG Team (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WLD_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WLD_MMG";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WLD_MMG";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WLD_AMMG";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_DST_InfSentry
				{
					name = "Sentry (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "NLD_DST_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_DST_InfTeam
				{
					name = "Team (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_LAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_DST_InfSquad
				{
					name = "Squad (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_SL";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_LAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_CLS";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {25,0,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_DST_GL";
						rank = "PRIVATE";
						position[] = {30,0,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_DST_AMMO";
						rank = "PRIVATE";
						position[] = {35,0,0};
					};
				};
				class NLD_DST_InfCmdr
				{
					name = "Platoon Command (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_CLS";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_DST_InfAtTeam
				{
					name = "Anti-armor Team (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_MAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_MAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AMAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_DST_InfAaTeam
				{
					name = "Anti-air Team (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_AA";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AAA";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_DST_InfLMGTeam
				{
					name = "LMG Team (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AAR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_DST_InfMMGTeam
				{
					name = "MMG Team (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_DST_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_DST_MMG";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_DST_MMG";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_DST_AMMG";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WTR_InfSentry
				{
					name = "Sentry (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "NLD_WTR_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_WTR_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_WTR_InfTeam
				{
					name = "Team (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_Rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_LAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WTR_InfSquad
				{
					name = "Squad (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_SL";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_LAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_CLS";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {25,0,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_WTR_GL";
						rank = "PRIVATE";
						position[] = {30,0,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_WTR_AMMO";
						rank = "PRIVATE";
						position[] = {35,0,0};
					};
				};
				class NLD_WTR_InfCmdr
				{
					name = "Platoon Command (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_CLS";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WTR_InfAtTeam
				{
					name = "Anti-armor Team (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_MAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_MAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AMAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WTR_InfAaTeam
				{
					name = "Anti-air Team (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_AA";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AAA";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WTR_InfLMGTeam
				{
					name = "LMG Team (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AAR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_WTR_InfMMGTeam
				{
					name = "MMG Team (Winter)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_WTR_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_WTR_MMG";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_WTR_MMG";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_WTR_AMMG";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPT_InfSentry
				{
					name = "Sentry (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "NLD_NFPT_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_NFPT_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPT_InfTeam
				{
					name = "Team (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_Rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_LAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPT_InfSquad
				{
					name = "Squad (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_SL";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_LAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_CLS";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {25,0,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_NFPT_GL";
						rank = "PRIVATE";
						position[] = {30,0,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_NFPT_AMMO";
						rank = "PRIVATE";
						position[] = {35,0,0};
					};
				};
				class NLD_NFPT_InfCmdr
				{
					name = "Platoon Command (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_CLS";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPT_InfAtTeam
				{
					name = "Anti-armor Team (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_MAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_MAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AMAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPT_InfAaTeam
				{
					name = "Anti-air Team (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_AA";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AAA";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPT_InfLMGTeam
				{
					name = "LMG Team (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AAR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPT_InfMMGTeam
				{
					name = "MMG Team (NFP-Tan)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPT_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPT_MMG";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPT_MMG";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPT_AMMG";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPG_InfSentry
				{
					name = "Sentry (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "NLD_NFPG_GL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class NLD_NFPG_InfTeam
				{
					name = "Team (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_LAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPG_InfSquad
				{
					name = "Squad (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_SL";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_LAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class unit4
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {20,0,0};
					};
					class unit5
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {25,0,0};
					};
					class unit6
					{
						side = 1;
						vehicle="NLD_NFPG_GL";
						rank = "PRIVATE";
						position[] = {30,0,0};
					};
					class unit7
					{
						side = 1;
						vehicle="NLD_NFPG_AMMO";
						rank = "PRIVATE";
						position[] = {35,0,0};
					};
				};
				class NLD_NFPG_InfCmdr
				{
					name = "Platoon Command (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_OFF";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_CLS";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_Rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPG_InfAtTeam
				{
					name = "Anti-armor Team (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_MAT";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_MAT";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AMAT";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPG_InfAaTeam
				{
					name = "Anti-air Team (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_AA";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_AA";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AAA";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPG_InfLMGTeam
				{
					name = "LMG Team (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_AR";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AAR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class NLD_NFPG_InfMMGTeam
				{
					name = "MMG Team (NFP-Green)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_NFPG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_NFPG_MMG";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_NFPG_MMG";
						rank = "PRIVATE";
						position[] = {10,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_NFPG_AMMG";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
			};

			class SpecOps
			{
				name = "Special Forces";
			};

			class Support
			{
				name = "Support";
			};

			class Armored
			{
				name = "Armor";

				class NLD_WLD_ArmorPlt
				{
					name = "Leopard2 Platoon (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_Leo2_WLD";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Leo2_WLD";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Leo2_WLD";
						rank = "LIEUTENANT";
						position[] = {20,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Leo2_WLD";
						rank = "LIEUTENANT";
						position[] = {30,0,0};
					};
				};
				class NLD_WLD_LeoSection
				{
					name = "Leopard2 Section (Woodland)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_Leo2_WLD";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Leo2_WLD";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
				};
				class NLD_DST_ArmorPlt
				{
					name = "Leopard2 Platoon (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_Leo2_DST";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Leo2_DST";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
					class unit2
					{
						side = 1;
						vehicle="NLD_Leo2_DST";
						rank = "LIEUTENANT";
						position[] = {20,0,0};
					};
					class unit3
					{
						side = 1;
						vehicle="NLD_Leo2_DST";
						rank = "LIEUTENANT";
						position[] = {30,0,0};
					};
				};
				class NLD_DST_LeoSection
				{
					name = "Leopard2 Section (Desert)";
					side = 1;
					faction = "NLD_Units";
					rarityGroup = 0.3;
					class unit0
					{
						side = 1;
						vehicle="NLD_Leo2_DST";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class unit1
					{
						side = 1;
						vehicle="NLD_Leo2_DST";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
				};
			};

/*
			class Mechanized
			{

			};

			class Motorized
			{

			};

			Class Air
			{

			};
*/

		};

	};

};