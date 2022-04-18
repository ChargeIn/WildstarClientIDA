#include "../winhttp.h"

//----- (00000001404D7A10) ----------------------------------------------------
void __fastcall sub_1404D7A10(__m128* a1, _DWORD* a2, __int64 a3, unsigned int a4)
{
	double v4; // xmm2_8
	double v5; // xmm3_8
	__int64 v10; // rcx
	__int64 v11; // rdx
	_BYTE* v12; // r8
	char* v13; // rdx
	unsigned __int64 v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // r10
	bool v17; // cf
	__int64 v18; // rax
	__int64 v19; // rdx
	int v20; // eax
	__int64 v21; // rcx
	_QWORD* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rax
	_QWORD* v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax
	int v31; // eax
	int v32; // edx
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rdi
	unsigned __int64 v36; // rax
	int v37; // xmm0_4
	int v38; // r10d
	int v39; // r10d
	int v40; // r10d
	int v41; // r10d
	int v42; // r10d
	int v43; // r10d
	__int64 v44; // rcx
	int v45; // eax
	_DWORD* v46; // rcx
	BOOL v47; // eax
	int v48; // ecx
	__int64 v49; // rcx
	BOOL v50; // r10d
	unsigned __int64 v51; // r9
	int v52; // edx
	BOOL v53; // r10d
	BOOL v54; // r10d
	__int64 v55; // [rsp+20h] [rbp-38h]
	__int128 v56; // [rsp+40h] [rbp-18h]

	if (!sub_1405CCDE0(a1[1817].m128_i64[1]) || *a2 == 7)
	{
		v11 = (unsigned int)*a2;
		switch ((int)v11)
		{
		case 2:
			v12 = &unk_1409D091F;
			v13 = "InvokeOptionsDialog";
			goto LABEL_227;
		case 3:
			v12 = &unk_1409D0CEE;
			v13 = "ToggleCharacterWindow";
			goto LABEL_227;
		case 4:
			v12 = &unk_1409D0D3F;
			v13 = "ToggleInventory";
			goto LABEL_227;
		case 5:
			v12 = &unk_1409D09DE;
			v13 = "ToggleQuestLog";
			goto LABEL_227;
		case 6:
			sub_14043C700(v10, 0i64);
			break;
		case 7:
			sub_1404D8A90((__int64)a1, a4, v4, v5);
			break;
		case 9:
			if (!a4)
			{
				if (a1[1802].m128_i32[1])
					a1[1802].m128_i32[2] = a1[1802].m128_i32[2] == 0;
			}
			break;
		case 10:
			sub_1404D8DB0(a1, v11, v4, v5, v55);
			break;
		case 11:
			if (!a4)
				sub_1404D9740(a1, v11, v4, v5, v55);
			break;
		case 12:
			sub_1404D9450(a1, a4, v4, v5, v55);
			break;
		case 13:
			if (!a4)
				sub_1404D9690(a1, v11, v4, v5, v55);
			break;
		case 14:
			v14 = a1[1609].m128_u64[0];
			if (v14)
				sub_14055B0E0((__int64)a1, *(_DWORD*)(v14 + 8), v4, v5);
			break;
		case 15:
			v15 = (_QWORD*)a1[1733].m128_u64[0];
			v16 = 1i64;
			if (!v15 || v15[12] <= 1ui64)
				break;
			v17 = v15[13] == 0i64;
			v18 = v15[11];
			if (!v17)
				v16 = 0i64;
			v19 = *(_QWORD*)(v18 + 8 * v16);
			goto LABEL_52;
		case 16:
			v22 = (_QWORD*)a1[1733].m128_u64[0];
			v23 = 2i64;
			if (!v22 || v22[12] <= 2ui64)
				break;
			v17 = v22[13] < 2ui64;
			v24 = v22[11];
			if (!v17)
				v23 = 1i64;
			v19 = *(_QWORD*)(v24 + 8 * v23);
			goto LABEL_52;
		case 17:
			v25 = (_QWORD*)a1[1733].m128_u64[0];
			v26 = 3i64;
			if (!v25 || v25[12] <= 3ui64)
				break;
			v17 = v25[13] < 3ui64;
			v27 = v25[11];
			if (!v17)
				v26 = 2i64;
			v19 = *(_QWORD*)(v27 + 8 * v26);
			goto LABEL_52;
		case 18:
			v28 = (_QWORD*)a1[1733].m128_u64[0];
			v29 = 4i64;
			if (!v28 || v28[12] <= 4ui64)
				break;
			v17 = v28[13] < 4ui64;
			v30 = v28[11];
			if (!v17)
				v29 = 3i64;
			v19 = *(_QWORD*)(v30 + 8 * v29);
		LABEL_52:
			if (v19)
			{
				v20 = sub_1403D9500((__int64)a1, (int*)(v19 + 16));
				sub_14055B0E0(v21, v20, v4, v5);
			}
			break;
		case 19:
			sub_1404D9FD0(a1, 1, 1, 0, 1);
			break;
		case 20:
			sub_1404D9FD0(a1, 1, 1, 0, 0);
			break;
		case 21:
			sub_1404D9FD0(a1, 0, 0, 1, 1);
			break;
		case 22:
			sub_1404D9FD0(a1, 0, 0, 1, 0);
			break;
		case 23:
			sub_1404D8A00((__int64)a1, v11, v4, v5);
			break;
		case 24:
			sub_1404D97A0((__int64)a1, a4, *(_DWORD*)(a3 + 12));
			break;
		case 25:
			sub_1404D9870((__int64)a1, a4, *(_DWORD*)(a3 + 12));
			break;
		case 26:
			sub_1404D9940((__int64)a1, a4, *(_DWORD*)(a3 + 12));
			break;
		case 27:
			sub_1404D9A10((__int64)a1, a4, *(_DWORD*)(a3 + 12));
			break;
		case 28:
			sub_1404D9AE0((__int64)a1, a4, *(_DWORD*)(a3 + 12));
			break;
		case 29:
			sub_1404D9BC0((__int64)a1, a4, *(_DWORD*)(a3 + 12));
			break;
		case 32:
			if (!a4)
				goto LABEL_188;
			v47 = sub_1404DAF50((__int64)a1);
			goto LABEL_185;
		case 34:
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89DC8 + 64i64))(qword_140C89DC8, 0i64);
			break;
		case 35:
			if (qword_140C65970 && a1[7].m128_u64[1])
			{
				if (*(_DWORD*)(qword_140C65970 + 8) == 2)
				{
					if ((unsigned int)sub_14055A260((__m128*)a1[1843].m128_i32))
					{
						v32 = a1[1612].m128_i32[1];
						if (v32)
						{
							v33 = sub_1403D90D0((__int64)a1, v32);
							v35 = v33;
							if (v33)
							{
								if ((unsigned int)sub_140570C90(v34, v33, 0, 0i64))
									sub_14055B0E0((__int64)a1, *(_DWORD*)(v35 + 8), v4, v5);
							}
						}
					}
				}
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89DD0 + 64i64))(qword_140C89DD0, 0i64);
			}
			break;
		case 36:
			sub_1404D9F20((__int64)a1, a4);
			break;
		case 37:
			v50 = *(_DWORD*)(a3 + 24) && a4;
			(*(void(__fastcall**)(__int64, BOOL))(*(_QWORD*)qword_140C89DC0 + 64i64))(qword_140C89DC0, v50);
			break;
		case 38:
			sub_1404DB6D0((__int64)a1);
			break;
		case 39:
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89DB0 + 64i64))(qword_140C89DB0, 0i64);
			break;
		case 40:
			dword_140C89AA0 = dword_140C89AA0 == 0;
			break;
		case 45:
			sub_1404DA040((__int64)a1);
			break;
		case 46:
			sub_1404DA150((__int64)a1);
			break;
		case 47:
			if (!a4)
				goto LABEL_188;
			v47 = sub_1404DAEB0((__int64)a1, 0);
		LABEL_185:
			v48 = dword_140C89AA0;
			if (v47)
				v48 = 0;
			dword_140C89AA0 = v48;
		LABEL_188:
			sub_1404D7830((__int64)a1);
			break;
		case 48:
			if (!*(_DWORD*)(a3 + 24) || !a4)
				sub_14039B930(a1, 30);
			break;
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 58:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			if (*(_DWORD*)(a3 + 24) && a4)
				sub_1404DA740((__int64)a1, v11 - 49, 1);
			else
				sub_1404DA740((__int64)a1, v11 - 49, 0);
			break;
		case 57:
			if (*(_DWORD*)(a3 + 24) && a4)
				sub_1404DA3E0((__int64)a1, 1);
			else
				sub_1404DA3E0((__int64)a1, 0);
			break;
		case 103:
		case 104:
		case 105:
			v44 = a1[1753].m128_i64[0];
			if (v44)
				sub_1405E7490(v44, (unsigned int)(v11 - 103), 1);
			break;
		case 109:
			dword_140C89BB4 = dword_140C89BB4 == 0;
			break;
		case 110:
			v12 = &unk_1409D0D63;
			v13 = "ToggleFramerate";
			goto LABEL_227;
		case 114:
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ToggleZoneMap", &unk_1409D0CCB);
			break;
		case 115:
			Apollo_LUAEvent(a1[1844].m128_i64[0], "ToggleAbilitiesWindow", byte_1409E9D34, 0i64);
			break;
		case 118:
			if (a1[1843].m128_i32[2])
			{
				a1[1843].m128_i32[2] = 0;
			}
			else if ((unsigned int)sub_14055A260((__m128*)a1[1843].m128_i32))
			{
				a1[1843].m128_i32[2] = 2;
			}
			break;
		case 119:
			sub_1404DA9D0((__int64)a1);
			break;
		case 123:
			if (*(_DWORD*)(a3 + 24) && a4)
				sub_1404DA2E0((__int64)a1, 1);
			else
				sub_1404DA2E0((__int64)a1, 0);
			break;
		case 128:
			v46 = (_DWORD*)a1[1855].m128_u64[1];
			if (v46)
				sub_140608D00(v46);
			break;
		case 129:
			if (a1[1803].m128_i32[0])
			{
				v36 = a1[1818].m128_u64[0];
				v56 = *(_OWORD*)(v36 + 544);
				if (fabs(*(float*)(v36 + 548)) < 1.5707964)
					v37 = 1078530011;
				else
					v37 = 0;
				DWORD1(v56) = v37;
				*(_OWORD*)(v36 + 544) = v56;
			}
			break;
		case 130:
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89DD8 + 64i64))(qword_140C89DD8, 0i64);
			break;
		case 131:
			v12 = &unk_1409D098F;
			v13 = "ToggleCodex";
			goto LABEL_227;
		case 133:
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89E00 + 64i64))(qword_140C89E00, 0i64);
			break;
		case 134:
			if (*(_DWORD*)(a3 + 24) && a4)
				sub_1404DA4E0((__int64)a1, 0, 1);
			else
				sub_1404DA4E0((__int64)a1, 0, 0);
			break;
		case 135:
			if (*(_DWORD*)(a3 + 24) && a4)
				sub_1404DA4E0((__int64)a1, 1u, 1);
			else
				sub_1404DA4E0((__int64)a1, 1u, 0);
			break;
		case 136:
			v38 = *(_DWORD*)(a3 + 24) && a4;
			sub_1404DA4E0((__int64)a1, 2u, v38);
			break;
		case 137:
			v39 = *(_DWORD*)(a3 + 24) && a4;
			sub_1404DA4E0((__int64)a1, 3u, v39);
			break;
		case 138:
			v40 = *(_DWORD*)(a3 + 24) && a4;
			sub_1404DA4E0((__int64)a1, 4u, v40);
			break;
		case 139:
			v41 = *(_DWORD*)(a3 + 24) && a4;
			sub_1404DA4E0((__int64)a1, 5u, v41);
			break;
		case 151:
			v12 = &unk_1409D098E;
			v13 = "ToggleGroupFinder";
			goto LABEL_227;
		case 152:
			v49 = *(int*)(qword_140C65898 + 30024);
			if ((unsigned int)v49 > 0x23)
				(*(void(__fastcall**)(_QWORD, _QWORD))(MEMORY[0] + 64i64))(0i64, 0i64);
			else
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89D80[v49] + 64i64))(
					qword_140C89D80[v49],
					0i64);
			break;
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
			v51 = a1[1609].m128_u64[0];
			v52 = v11 - 154;
			if (v51)
				LODWORD(v51) = *(_DWORD*)(v51 + 264);
			sub_1406020B0((__int64)&a1[1729], v52 + 1, v51);
			break;
		case 162:
			sub_14039EFF0((__int64)a1, 1, 0);
			break;
		case 163:
			sub_14039EFF0((__int64)a1, 2, 0);
			break;
		case 164:
			sub_14039EFF0((__int64)a1, 3, 0);
			break;
		case 165:
			sub_14039EFF0((__int64)a1, 4, 0);
			break;
		case 168:
			if (!*(_DWORD*)(a3 + 24) || a4)
				break;
			v12 = &unk_1409D11FF;
			v13 = "ChatReply";
			goto LABEL_227;
		case 169:
			if (!*(_DWORD*)(a3 + 24) || a4)
				break;
			v12 = &unk_1409D11FE;
			v13 = "ChatReWhisper";
			goto LABEL_227;
		case 176:
			if (!a1[7].m128_u64[1])
				break;
			v31 = sub_14055A5F0(a1, 1, 1, 0, 1, 1, 0, 50.0);
			goto LABEL_75;
		case 177:
			if (!a1[7].m128_u64[1])
				break;
			v31 = sub_14055A5F0(a1, 0, 0, 1, 1, 1, 0, 50.0);
		LABEL_75:
			if (v31)
				sub_14055B0E0((__int64)a1, v31, v4, v5);
			break;
		case 178:
			v12 = &unk_1409D0BDA;
			v13 = "ToggleAchievementWindow";
			goto LABEL_227;
		case 179:
			v12 = &unk_1409D1097;
			v13 = "ToggleAuctionList";
			goto LABEL_227;
		case 180:
			v12 = &unk_1409D0947;
			v13 = "ToggleChallengesWindow";
			goto LABEL_227;
		case 182:
			v12 = &unk_1409D0A9A;
			v13 = "InvokeFriendsList";
			goto LABEL_227;
		case 183:
			v12 = &unk_1409D0ABB;
			v13 = "InterfaceMenu_ToggleLoreWindow";
			goto LABEL_227;
		case 184:
			v12 = &unk_1409D12BB;
			v13 = "ToggleMailWindow";
			goto LABEL_227;
		case 185:
			v12 = &unk_1409D0ADE;
			v13 = "PlayerPathShow";
			goto LABEL_227;
		case 187:
			v12 = &unk_1409D0B06;
			v13 = "ToggleSocialWindow";
			goto LABEL_227;
		case 188:
			v12 = &unk_1409D0ABF;
			v13 = "ToggleTradeskills";
			goto LABEL_227;
		case 189:
			v45 = dword_140C49F00;
			if (*(_DWORD*)qword_140C63750 < dword_140C49F00)
				v45 = *(_DWORD*)qword_140C63750;
			sub_14039EFF0((__int64)a1, (*((_BYTE*)&dword_140C49F10 + v45) != 0) + 1, 1);
			break;
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
			v43 = *(_DWORD*)(a3 + 24) && a4;
			sub_1404DA610((__int64)a1, v11 - 190, v43);
			break;
		case 196:
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ToggleGhostModeMap", &unk_1409D0CEA);
			break;
		case 197:
			v53 = *(_DWORD*)(a3 + 24) && a4;
			(*(void(__fastcall**)(__int64, BOOL))(*(_QWORD*)qword_140C89E50 + 64i64))(qword_140C89E50, v53);
			break;
		case 198:
			v54 = *(_DWORD*)(a3 + 24) && a4;
			(*(void(__fastcall**)(__int64, BOOL))(*(_QWORD*)qword_140C89E58 + 64i64))(qword_140C89E58, v54);
			break;
		case 199:
			v12 = &unk_1409D0B7F;
			v13 = "ToggleGuild";
			goto LABEL_227;
		case 200:
			sub_1404D9CA0((__int64)a1, a4);
			break;
		case 201:
			sub_1404D9D40((__int64)a1, a4);
			break;
		case 202:
			sub_1404D9DE0((__int64)a1, a4);
			break;
		case 203:
			sub_1404D9E80((__int64)a1, a4);
			break;
		case 205:
			if (a4)
			{
				if ((unsigned int)sub_14055A260((__m128*)a1[1843].m128_i32))
					a1[1843].m128_i32[3] = 2;
			}
			else
			{
				a1[1843].m128_i32[3] = 0;
			}
			break;
		case 206:
			sub_1403FA490((__int64)a1, 1);
			break;
		case 207:
			v12 = &unk_1409D0AEE;
			v13 = "ToggleAccountInventoryWindow";
			goto LABEL_227;
		case 208:
			if (*(_DWORD*)(qword_140C635F0 + 5896))
				break;
			v12 = &unk_1409D10AB;
			v13 = "ToggleCREDDExchangeWindow";
		LABEL_227:
			Apollo_LUAEvent(a1[1844].m128_i64[0], v13, v12);
			break;
		case 209:
			v12 = &unk_1409D0ADF;
			v13 = "ToggleCollectiblesWindow";
			goto LABEL_227;
		case 210:
			v12 = &unk_1409D0A63;
			v13 = "ToggleContractsWindow";
			goto LABEL_227;
		case 211:
			v12 = &unk_1409D0A62;
			v13 = "ToggleHoloWardrobeWindow";
			goto LABEL_227;
		case 212:
			v12 = &unk_1409D0ABA;
			v13 = "ToggleLevelUpUnlockWindow";
			goto LABEL_227;
		case 214:
			v12 = &unk_1409D0A2F;
			v13 = "ToggleWhoWindow";
			goto LABEL_227;
		case 215:
			v12 = &unk_1409D0A9F;
			v13 = "ToggleNonCombatAbilitiesWindow";
			goto LABEL_227;
		case 216:
			v12 = &unk_1409D0A9B;
			v13 = "ToggleMacrosWindow";
			goto LABEL_227;
		case 217:
			v12 = &unk_1409D0AEF;
			v13 = "ToggleReputationInterface";
			goto LABEL_227;
		case 218:
			v42 = *(_DWORD*)(a3 + 24) && a4;
			sub_1404DA4E0((__int64)a1, 6u, v42);
			break;
		case 219:
			v12 = &unk_1409D1399;
			v13 = "ToggleWelcomeWindow";
			goto LABEL_227;
		case 221:
			v12 = &unk_1409D0A2E;
			v13 = "ToggleLeaderboardsWindow";
			goto LABEL_227;
		case 222:
			v12 = &unk_1409D13A9;
			v13 = "TogglePrimalMatrix";
			goto LABEL_227;
		default:
			return;
		}
		sub_1405DF340((__int64)&a1[1667].m128_i64[1]);
	}
}
// 1404D7B2C: variable 'v10' is possibly undefined
// 1404D7D03: variable 'v4' is possibly undefined
// 1404D7D03: variable 'v5' is possibly undefined
// 1404D7D10: variable 'v55' is possibly undefined
// 1404D7DBD: variable 'v21' is possibly undefined
// 1404D7FEC: variable 'v34' is possibly undefined
// 1409E9D34: using guessed type _BYTE byte_1409E9D34[24];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C49F00: using guessed type int dword_140C49F00;
// 140C49F10: using guessed type int dword_140C49F10;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C89AA0: using guessed type int dword_140C89AA0;
// 140C89BB4: using guessed type int dword_140C89BB4;
// 140C89D80: using guessed type __int64 qword_140C89D80[];
// 140C89DB0: using guessed type __int64 qword_140C89DB0;
// 140C89DC0: using guessed type __int64 qword_140C89DC0;
// 140C89DC8: using guessed type __int64 qword_140C89DC8;
// 140C89DD0: using guessed type __int64 qword_140C89DD0;
// 140C89DD8: using guessed type __int64 qword_140C89DD8;
// 140C89E00: using guessed type __int64 qword_140C89E00;
// 140C89E50: using guessed type __int64 qword_140C89E50;
// 140C89E58: using guessed type __int64 qword_140C89E58;

