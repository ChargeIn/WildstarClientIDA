#include "../winhttp.h"

//----- (00000001403A71F0) ----------------------------------------------------
void __fastcall sub_1403A71F0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
	__int64 v4; // rdi
	__int64 v8; // rbx
	__m128* v9; // rbp
	float v10; // xmm6_4
	__m128* v11; // rax
	__int64 v12; // r9
	unsigned int v13; // edx
	unsigned int v14; // r8d
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	int v18; // eax
	__int64 v19; // rax
	unsigned __int64 i; // rax
	__int64 v21; // rcx
	unsigned int v22; // edx
	int v23; // [rsp+20h] [rbp-68h]
	_DWORD v24[2]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v25[3]; // [rsp+48h] [rbp-40h] BYREF

	v4 = 0i64;
	v8 = a1;
	v9 = 0i64;
	v10 = 0.0;
	if ((unsigned __int64)(int)a3 < 0x66)
		v10 = *(float*)&dword_140C48160[18 * a3];
	if (!a2
		|| (v11 = (__m128*)sub_1403D90D0(a1, a2), (v9 = v11) != 0i64)
		&& !(unsigned int)sub_1403ADD00(*(__m128**)(v8 + 120), v11, v10)
		&& ((v12 = *(_QWORD*)(qword_140C65898 + 120)) == 0
			|| (a1 = *(_QWORD*)(v8 + 120), *(_DWORD*)(a1 + 8) != *(_DWORD*)(v12 + 8))
			|| !*(_QWORD*)(qword_140C65898 + 26392)))
	{
		v13 = *(_DWORD*)(v8 + 26180);
		v14 = *(_DWORD*)(v8 + 26176);
		*(_DWORD*)(v8 + 26176) = a2;
		*(_DWORD*)(v8 + 26180) = a3;
		if (__PAIR64__(v13, v14) == __PAIR64__(a3, a2))
		{
			switch (v13)
			{
			case 8u:
			case 0xBu:
			case 0xCu:
			case 0xDu:
			case 0xEu:
			case 0xFu:
			case 0x10u:
			case 0x11u:
			case 0x12u:
			case 0x13u:
			case 0x1Eu:
			case 0x24u:
			case 0x25u:
			case 0x28u:
			case 0x29u:
			case 0x2Au:
			case 0x2Bu:
			case 0x2Du:
			case 0x2Eu:
			case 0x2Fu:
			case 0x30u:
			case 0x31u:
			case 0x33u:
			case 0x3Du:
			case 0x3Eu:
			case 0x3Fu:
			case 0x41u:
			case 0x42u:
			case 0x43u:
			case 0x45u:
			case 0x46u:
			case 0x47u:
			case 0x48u:
			case 0x49u:
			case 0x4Bu:
			case 0x4Cu:
			case 0x4Fu:
			case 0x50u:
			case 0x51u:
			case 0x52u:
			case 0x54u:
			case 0x55u:
			case 0x56u:
			case 0x57u:
				return;
			default:
				goto LABEL_11;
			}
		}
		else
		{
		LABEL_11:
			if (v14)
			{
				switch (v13)
				{
				case 8u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "HousingGuildNeighborhoodBrokerClose", byte_1409D0F62);
					break;
				case 0xBu:
				case 0xCu:
				case 0xDu:
				case 0xEu:
				case 0xFu:
				case 0x10u:
				case 0x11u:
				case 0x12u:
				case 0x13u:
				case 0x25u:
				case 0x33u:
				case 0x3Du:
				case 0x3Eu:
				case 0x3Fu:
					Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Dialog_Close", byte_1409D0BFF);
					sub_140554EA0((__int64)&qword_140C7DC60, 0);
					break;
				case 0x1Eu:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "SettlerHubClose", byte_1409D1173);
					break;
				case 0x24u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "HideInstanceGameModeDialog", byte_1409E8FBC, 1i64);
					break;
				case 0x28u:
				case 0x29u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ResourceConversionClose", byte_1409D0E17);
					break;
				case 0x2Au:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "AbilitiesWindowClose", byte_1409E9CFC, 1i64);
					break;
				case 0x2Bu:
					sub_140426B60(*(_QWORD*)(v8 + 29504));
					break;
				case 0x2Cu:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "CraftingStationClose", &unk_1409D123E);
					break;
				case 0x2Du:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ShuttlePromptClose", &unk_1409D0E41);
					break;
				case 0x2Eu:
				case 0x2Fu:
				case 0x30u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "TaxiWindowClose", byte_1409D0DE3);
					break;
				case 0x31u:
					sub_140426AC0(*(_QWORD*)(v8 + 29504));
					break;
				case 0x41u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MannequinWindowClose", &unk_1409D0D3D);
					break;
				case 0x42u:
					sub_140426890(*(_QWORD*)(v8 + 29504));
					break;
				case 0x43u:
					sub_1404268D0(*(_QWORD*)(v8 + 29504));
					break;
				case 0x44u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MailBoxDeactivate", byte_1409D132B);
					break;
				case 0x45u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "HideDye", byte_1409D0DB7);
					break;
				case 0x46u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "GuildRegistrarClose", &unk_1409D0EB6);
					break;
				case 0x47u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "WarPartyRegistrarClose", &unk_1409D0E93);
					break;
				case 0x48u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "GuildBankerClose", &unk_1409D0E92);
					break;
				case 0x49u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "WarPartyBankerClose", byte_1409D0EA7);
					break;
				case 0x4Bu:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MarketplaceWindowClose", byte_1409D107F);
					break;
				case 0x4Cu:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "AuctionWindowClose", &unk_1409D10A9);
					break;
				case 0x4Fu:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "TradeskillEngravingStationClose", &unk_1409D11C3);
					break;
				case 0x50u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "HousingMannequinClose", &unk_1409D0FFE);
					break;
				case 0x51u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "CityDirectionsClose", byte_1409D123F);
					break;
				case 0x52u:
					if (!*(_DWORD*)(qword_140C635F0 + 5896))
						Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "CREDDExchangeWindowClose", &unk_1409D10AE);
					break;
				case 0x54u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "CommunityRegistrarClose", &unk_1409D0EEA);
					break;
				case 0x55u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ContractBoardClose", &unk_1409D0BFA);
					break;
				case 0x56u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "BarberClose", &unk_1409D0C5B);
					break;
				case 0x57u:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MasterCraftsmanClose", &unk_1409D0C16);
					break;
				default:
					break;
				}
			}
			if (a4)
			{
				v24[0] = a2;
				v24[1] = a3;
				sub_1403F4900(v8, 0x7EAu, (__int64)v24);
			}
			if (a2)
			{
				switch (*(_DWORD*)(v8 + 26180))
				{
				case 8:
					v17 = *(_QWORD*)(qword_140C65898 + 7152);
					if (v17)
						v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17);
					else
						v18 = 0;
					LOBYTE(v4) = v18 != 167;
					v19 = sub_140205B60((int)v4 + 12);
					if (v19)
						Apollo_LUAEvent(
							*(_QWORD*)(v8 + 29504),
							"HousingGuildNeighborhoodBrokerOpen",
							byte_1409EBF7C,
							*(unsigned int*)(v19 + 4));
					break;
				case 0x28:
				case 0x29:
					v15 = v9[1].m128_i64[1];
					if (v15)
					{
						v16 = sub_1403AC530(a1, *(_DWORD*)(v15 + 112));
						if (v16)
						{
							if ((*(_BYTE*)(*(_QWORD*)v16 + 4i64) & 4) == 0)
								Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ResourceConversionOpen", byte_1409E9FFC, a2);
						}
					}
					break;
				case 0x2A:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ToggleAbilitiesWindow", byte_1409E9D34, 1i64);
					break;
				case 0x2B:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "InvokeTradeskillTrainerWindow", byte_1409E9F2C, a2);
					break;
				case 0x2D:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "InvokeShuttlePrompt", byte_1409E9F54, a2);
					break;
				case 0x2E:
					v23 = 1;
					goto LABEL_66;
				case 0x2F:
				case 0x30:
					v23 = 0;
				LABEL_66:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "InvokeTaxiWindow", byte_1409E9F7C, a2, v23);
					break;
				case 0x41:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MannequinWindowOpen", &unk_1409D0D3E);
					break;
				case 0x42:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ShowBank", &unk_1409D0DB5);
					break;
				case 0x43:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ShowRealmBank", &unk_1409D0DA6);
					break;
				case 0x44:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MailBoxActivate", &unk_1409D1359);
					break;
				case 0x45:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ShowDye", &unk_1409D0DCB);
					break;
				case 0x46:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "GuildRegistrarOpen", byte_1409EA66C, a2);
					break;
				case 0x47:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "WarPartyRegistrarOpen", byte_1409EA63C, a2);
					break;
				case 0x48:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "GuildBankerOpen", byte_1409EA554, a2);
					break;
				case 0x49:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "WarPartyBankerOpen", byte_1409EA52C, a2);
					break;
				case 0x4B:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ToggleMarketplaceWindow", &unk_1409D1093);
					break;
				case 0x4C:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ToggleAuctionWindow", &unk_1409D10AA);
					break;
				case 0x4F:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "TradeskillEngravingStationOpen", byte_1409D11C7);
					break;
				case 0x50:
					qword_140C4DF28 = 0i64;
					for (i = 0i64; i < qword_140C4DF20; ++i)
					{
						v21 = *(_QWORD*)(qword_140C4DF18 + 8 * i);
						if (v21)
						{
							if (*(_DWORD*)(v21 + 104) == a2)
								v4 = *(_QWORD*)(qword_140C4DF18 + 8 * i);
							qword_140C4DF28 = v4;
						}
					}
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "HousingMannequinOpen", byte_1409D0FFF);
					break;
				case 0x51:
					v25[1] = 0i64;
					v22 = *(_DWORD*)(qword_140C65898 + 29008);
					v25[0] = 0i64;
					sub_1403A9DA0(a1, v22, v25);
					sub_14042F470(*(_QWORD*)(qword_140C65898 + 29504), v25);
					if (v25[0])
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25[0] - 16) + 8i64))(v25[0] - 16);
					break;
				case 0x52:
					if (!*(_DWORD*)(qword_140C635F0 + 5896))
						Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ToggleCREDDExchangeWindow", &unk_1409D10AB);
					break;
				case 0x54:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "CommunityRegistrarOpen", byte_1409EA9E4, a2);
					break;
				case 0x55:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "ContractBoardOpen", &unk_1409D0BFB);
					sub_140437A10((_QWORD*)qword_140C658D8, 0x152u, 0, 0i64, 0, 0, 1);
					break;
				case 0x56:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "BarberOpen", &unk_1409D0BDF);
					break;
				case 0x57:
					Apollo_LUAEvent(*(_QWORD*)(v8 + 29504), "MasterCraftsmanOpen", byte_1409D0C17);
					break;
				case 0x58:
					sub_1403FA280(a1);
					break;
				default:
					return;
				}
			}
		}
	}
}
// 1403A7705: variable 'a1' is possibly undefined
// 1409D0BFF: using guessed type _BYTE byte_1409D0BFF[19];
// 1409D0C17: using guessed type _BYTE byte_1409D0C17[37];
// 1409D0DB7: using guessed type _BYTE byte_1409D0DB7[20];
// 1409D0DE3: using guessed type _BYTE byte_1409D0DE3[31];
// 1409D0E17: using guessed type _BYTE byte_1409D0E17[23];
// 1409D0EA7: using guessed type _BYTE byte_1409D0EA7[12];
// 1409D0F62: using guessed type _BYTE byte_1409D0F62[2];
// 1409D0FFF: using guessed type _BYTE byte_1409D0FFF[16];
// 1409D107F: using guessed type _BYTE byte_1409D107F[20];
// 1409D1173: using guessed type _BYTE byte_1409D1173[24];
// 1409D11C7: using guessed type _BYTE byte_1409D11C7[26];
// 1409D123F: using guessed type _BYTE byte_1409D123F[22];
// 1409D132B: using guessed type _BYTE byte_1409D132B[46];
// 1409E8FBC: using guessed type _BYTE byte_1409E8FBC[48];
// 1409E9CFC: using guessed type _BYTE byte_1409E9CFC[48];
// 1409E9D34: using guessed type _BYTE byte_1409E9D34[24];
// 1409E9F2C: using guessed type _BYTE byte_1409E9F2C[32];
// 1409E9F54: using guessed type _BYTE byte_1409E9F54[32];
// 1409E9F7C: using guessed type _BYTE byte_1409E9F7C[48];
// 1409E9FFC: using guessed type _BYTE byte_1409E9FFC[24];
// 1409EA52C: using guessed type _BYTE byte_1409EA52C[40];
// 1409EA554: using guessed type _BYTE byte_1409EA554[32];
// 1409EA63C: using guessed type _BYTE byte_1409EA63C[48];
// 1409EA66C: using guessed type _BYTE byte_1409EA66C[56];
// 1409EA9E4: using guessed type _BYTE byte_1409EA9E4[24];
// 1409EBF7C: using guessed type _BYTE byte_1409EBF7C[24];
// 140C48160: using guessed type int dword_140C48160[];
// 140C4DF18: using guessed type __int64 qword_140C4DF18;
// 140C4DF20: using guessed type __int64 qword_140C4DF20;
// 140C4DF28: using guessed type __int64 qword_140C4DF28;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

