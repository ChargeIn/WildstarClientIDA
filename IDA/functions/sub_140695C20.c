//----- (0000000140695C20) ----------------------------------------------------
__int64 __fastcall sub_140695C20(_QWORD* a1)
{
	unsigned __int64* v2; // rsi
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64* v7; // rdi
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64 v14; // r8
	__int64* v15; // r14
	__int64 v16; // rax
	unsigned int* v17; // r9
	unsigned int v18; // ebx
	unsigned int v19; // eax
	unsigned int v20; // edi
	unsigned int* v21; // rax
	unsigned __int64 v22; // rdx
	unsigned __int64 v23; // rcx
	unsigned __int64 v24; // rcx
	__int64 v26; // [rsp+20h] [rbp-E0h] BYREF
	int v27; // [rsp+28h] [rbp-D8h]
	__int64 v28[4]; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v29[186]; // [rsp+50h] [rbp-B0h] BYREF

	v2 = (unsigned __int64*)"__eq";
	v29[2] = (__int64)"__gc";
	v29[3] = (__int64)sub_140695BA0;
	v29[0] = (__int64)"__eq";
	v29[4] = (__int64)"GetType";
	v29[1] = (__int64)sub_1406959C0;
	v29[5] = (__int64)sub_1406968D0;
	v29[6] = (__int64)"GetName";
	v29[7] = (__int64)sub_140696950;
	v29[8] = (__int64)"Modify";
	v29[9] = (__int64)sub_140696A00;
	v29[10] = (__int64)"Kick";
	v29[11] = (__int64)sub_140696B70;
	v29[12] = (__int64)"Invite";
	v29[13] = (__int64)sub_140696C00;
	v29[14] = (__int64)"Leave";
	v29[15] = (__int64)sub_140696C90;
	v29[16] = (__int64)"Promote";
	v29[17] = (__int64)sub_140696CD0;
	v29[18] = (__int64)"PromoteMaster";
	v29[19] = (__int64)sub_140696D60;
	v29[20] = (__int64)"Demote";
	v29[21] = (__int64)sub_140696DF0;
	v29[22] = (__int64)"AddRank";
	v29[23] = (__int64)sub_140696E80;
	v29[24] = (__int64)"ModifyRank";
	v29[25] = (__int64)sub_140696F30;
	v29[26] = (__int64)"RenameRank";
	v29[27] = (__int64)sub_140697150;
	v29[28] = (__int64)"RemoveRank";
	v29[29] = (__int64)sub_140697200;
	v29[30] = (__int64)"Vote";
	v29[31] = (__int64)sub_140697270;
	v29[32] = (__int64)"Nominate";
	v29[33] = (__int64)sub_140697300;
	v29[34] = (__int64)"Disband";
	v29[35] = (__int64)sub_140697390;
	v29[36] = (__int64)"GetRanks";
	v29[37] = (__int64)sub_1406973D0;
	v29[38] = (__int64)"GetFlags";
	v29[39] = (__int64)sub_140698310;
	v29[40] = (__int64)"SetFlags";
	v29[41] = (__int64)sub_14069C540;
	v29[42] = (__int64)"GetChannel";
	v29[43] = (__int64)sub_140698440;
	v29[44] = (__int64)"RequestMembers";
	v29[45] = (__int64)sub_140698610;
	v29[46] = (__int64)"GetMyRank";
	v29[47] = (__int64)sub_1406984D0;
	v29[48] = (__int64)"SetAsNameplate";
	v29[49] = (__int64)sub_140698550;
	v29[50] = (__int64)"IsNameplate";
	v29[51] = (__int64)sub_140698590;
	v29[52] = (__int64)"GetMemberCount";
	v29[53] = (__int64)sub_140698650;
	v29[54] = (__int64)"GetOnlineMemberCount";
	v29[55] = (__int64)sub_1406986D0;
	v29[56] = (__int64)"GetStandard";
	v29[57] = (__int64)sub_140698750;
	v29[58] = (__int64)"SetStandard";
	v29[59] = (__int64)sub_140698880;
	v29[60] = (__int64)"GetInfluence";
	v29[61] = (__int64)sub_140698A80;
	v29[62] = (__int64)"GetBonusInfluenceRemaining";
	v29[63] = (__int64)sub_140698B00;
	v29[64] = (__int64)"BeginBankItemTransfer";
	v29[65] = (__int64)sub_1406990B0;
	v29[66] = (__int64)"EndBankItemTransfer";
	v29[67] = (__int64)sub_140699230;
	v29[68] = (__int64)"MoveBankItemToInventory";
	v29[69] = (__int64)sub_1406992D0;
	v29[70] = (__int64)"OpenBankTab";
	v29[71] = (__int64)sub_1406993A0;
	v29[72] = (__int64)"CloseBankTab";
	v29[73] = (__int64)sub_140699420;
	v29[74] = (__int64)"GetBankTab";
	v29[75] = (__int64)sub_140699470;
	v29[76] = (__int64)"RenameBankTab";
	v29[77] = (__int64)sub_1406999C0;
	v29[78] = (__int64)"GetBankTabName";
	v29[79] = (__int64)sub_140699770;
	v29[80] = (__int64)"GetBankTabCount";
	v29[81] = (__int64)sub_1406998A0;
	v29[82] = (__int64)"GetBankTabSlots";
	v29[83] = (__int64)sub_140699920;
	v29[84] = (__int64)"ListBossTokens";
	v29[85] = (__int64)sub_140699AA0;
	v29[86] = (__int64)"GetBossTokens";
	v29[87] = (__int64)sub_140699AE0;
	v29[88] = (__int64)"UseBossToken";
	v29[89] = (__int64)sub_140699D40;
	v29[90] = (__int64)"IsArenaTeam";
	v29[91] = (__int64)sub_140699DD0;
	v29[92] = (__int64)"GetMoney";
	v29[93] = (__int64)sub_140698B80;
	v29[94] = (__int64)"GetBankMoneyWithdrawnToday";
	v29[95] = (__int64)sub_140698C80;
	v29[96] = (__int64)"GetBankMoneyRepairToday";
	v29[97] = (__int64)sub_140698D80;
	v29[98] = (__int64)"GetBankMoneyRepairRemaining";
	v29[99] = (__int64)sub_140698E80;
	v29[100] = (__int64)"GetBankTabItemWithdrawnToday";
	v29[101] = (__int64)sub_140698F50;
	v29[102] = (__int64)"DepositMoney";
	v29[103] = (__int64)sub_14069A980;
	v29[104] = (__int64)"WithdrawMoney";
	v29[105] = (__int64)sub_14069AA30;
	v29[106] = (__int64)"GetWarCoins";
	v29[107] = (__int64)sub_140699030;
	v29[108] = (__int64)"SetBankTabPermissions";
	v29[109] = (__int64)sub_140699E60;
	v29[110] = (__int64)"SetRankBankMoneyLimit";
	v29[111] = (__int64)sub_14069A780;
	v29[112] = (__int64)"SetRankBankMoneyLimitToAll";
	v29[113] = (__int64)sub_14069A810;
	v29[114] = (__int64)"SetRankBankRepairLimit";
	v29[115] = (__int64)sub_14069A880;
	v29[116] = (__int64)"SetRankBankRepairLimitToAll";
	v29[117] = (__int64)sub_14069A910;
	v29[118] = (__int64)"IsUnitMember";
	v29[119] = (__int64)sub_14069AAE0;
	v29[120] = (__int64)"GetPvpRatings";
	v29[121] = (__int64)sub_14069AC50;
	v29[122] = (__int64)"GetMyPvpRatings";
	v29[123] = (__int64)sub_14069AE80;
	v29[124] = (__int64)"GetQueueState";
	v29[125] = (__int64)sub_14069ABD0;
	v29[126] = (__int64)"GetPerks";
	v29[127] = (__int64)sub_14069B140;
	v29[128] = (__int64)"GetPerk";
	v29[129] = (__int64)sub_14069B3B0;
	v29[130] = (__int64)"PurchasePerk";
	v29[131] = (__int64)sub_14069B520;
	v29[132] = (__int64)"ActivatePerk";
	v29[133] = (__int64)sub_14069B590;
	v29[134] = (__int64)"GetMessageOfTheDay";
	v29[135] = (__int64)sub_14069B690;
	v29[136] = (__int64)"SetMessageOfTheDay";
	v29[137] = (__int64)sub_14069B600;
	v29[138] = (__int64)"GetInfoMessage";
	v29[139] = (__int64)sub_14069B840;
	v29[140] = (__int64)"SetInfoMessage";
	v29[141] = (__int64)sub_14069B740;
	v29[142] = (__int64)"SetMemberNoteSelf";
	v29[143] = (__int64)sub_14069B8F0;
	v29[144] = (__int64)"RepairItemVendor";
	v29[145] = (__int64)sub_14069C6D0;
	v29[146] = (__int64)"RepairAllItemsVendor";
	v29[147] = (__int64)sub_14069C760;
	v29[148] = (__int64)"GetCreationDate";
	v29[149] = (__int64)sub_14069B980;
	v29[150] = (__int64)"RequestEventLogList";
	v29[151] = (__int64)sub_14069BA10;
	v29[152] = (__int64)"GetEventLogs";
	v29[153] = (__int64)sub_14069BA90;
	v29[154] = (__int64)"RequestRepairLogs";
	v29[155] = (__int64)sub_14069C4F0;
	v29[156] = (__int64)"RequestMoneyLogs";
	v29[157] = (__int64)sub_14069C4A0;
	v29[158] = (__int64)"RequestBankLogs";
	v29[159] = (__int64)sub_14069C420;
	v29[160] = (__int64)"Rename";
	v29[161] = (__int64)sub_14069C7A0;
	v29[162] = (__int64)"SetRecruitmentDescription";
	v29[183] = (__int64)sub_1406959C0;
	v29[163] = (__int64)sub_14069C8A0;
	v29[164] = (__int64)"GetRecruitmentDescription";
	v29[165] = (__int64)sub_14069C9A0;
	v29[184] = 0i64;
	v29[166] = (__int64)"SetRecruitmentDemand";
	v29[185] = 0i64;
	v29[167] = (__int64)sub_14069CA50;
	v28[2] = 0i64;
	v29[168] = (__int64)"GetRecruitmentDemands";
	v28[3] = 0i64;
	v29[169] = (__int64)sub_14069CB10;
	v29[170] = (__int64)"SetGuildClassification";
	v29[171] = (__int64)sub_14069CF90;
	v29[172] = (__int64)"GetGuildClassification";
	v29[173] = (__int64)sub_14069D070;
	v29[174] = (__int64)"SetRecruitmentMinLevel";
	v29[175] = (__int64)sub_14069D0F0;
	v29[176] = (__int64)"GetRecruitmentMinLevel";
	v29[177] = (__int64)sub_14069D1D0;
	v29[178] = (__int64)"SetMyRecruitmentAvailability";
	v29[179] = (__int64)sub_14069D250;
	v29[180] = (__int64)"GetMyRecruitmentAvailability";
	v29[181] = (__int64)sub_14069D350;
	v29[182] = (__int64)"__eq";
	v28[0] = (__int64)"is";
	v28[1] = (__int64)sub_140695A60;
	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Guild");
	v3 = a1[2];
	*(_QWORD*)v3 = *(_QWORD*)(v3 - 16);
	*(_DWORD*)(v3 + 8) = *(_DWORD*)(v3 - 8);
	a1[2] += 16i64;
	v4 = a1[2];
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v6 = (unsigned int*)(a1[2] - 16i64);
	v26 = v5;
	v27 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v4 - 32), (int*)&v26, v6);
	a1[2] -= 16i64;
	v7 = v29;
	do
	{
		v8 = v7[1];
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v9 = a1[5];
		if (v9 == a1[10])
			v10 = a1[15];
		else
			v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
		v11 = sub_140060AB0((__int64)a1, 0, v10);
		v11[4] = v8;
		v12 = a1[2];
		*(_QWORD*)v12 = v11;
		*(_DWORD*)(v12 + 8) = 6;
		a1[2] += 16i64;
		v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
		v14 = -1i64;
		v15 = v13;
		do
			++v14;
		while (*((_BYTE*)v2 + v14));
		v16 = sub_140062650((__int64)a1, v2, v14);
		v17 = (unsigned int*)(a1[2] - 16i64);
		v26 = v16;
		v27 = 4;
		sub_14005EA50((__int64)a1, v15, (int*)&v26, v17);
		a1[2] -= 16i64;
		v2 = (unsigned __int64*)v7[2];
		v7 += 2;
	} while (v2);
	a1[2] = a1[2];
	sub_140057020(a1, "GuildTypeLib", v28);
	if (!qword_140C7E9C8)
	{
		sub_14069DF40();
		sub_1407E4830((int*)qword_140C7E9C0, 0i64, 8 * qword_140C7E9C8);
		*(_QWORD*)qword_140C7E9C0 = L"bValid";
		v18 = 0;
		if (qword_140C63838)
		{
			v19 = qword_140C63838(off_140A6A5C8, qword_140C63858);
		}
		else
		{
			if (dword_140C63BB0 || (int)sub_1402021C0() < 0)
				return 1i64;
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C648C8 + 40i64))(qword_140C648C8);
		}
		v20 = v19;
		if (v19)
		{
			do
			{
				if (qword_140C63848)
				{
					v21 = (unsigned int*)qword_140C63848(off_140A6A5C8, v18, qword_140C63858);
				}
				else if (dword_140C63BB0)
				{
					v21 = 0i64;
				}
				else if ((int)sub_1402021C0() >= 0)
				{
					v21 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C648C8 + 32i64))(
						qword_140C648C8,
						v18);
				}
				else
				{
					v21 = 0i64;
				}
				v22 = *v21;
				if (v22 < qword_140C7E9C8)
				{
					v23 = *((_QWORD*)v21 + 2);
					if (v23)
					{
						if (v23 <= qword_140C3FE70)
							v24 = qword_140C3FE68 + v23;
						else
							v24 = 0i64;
					}
					else
					{
						v24 = 0i64;
					}
					*(_QWORD*)(qword_140C7E9C0 + 8 * v22) = v24;
				}
				++v18;
			} while (v18 < v20);
		}
	}
	return 1i64;
}
// 140A6A5C8: using guessed type wchar_t *off_140A6A5C8[2];
// 140B347F8: using guessed type wchar_t aBvalid[7];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BB0: using guessed type int dword_140C63BB0;
// 140C648C8: using guessed type __int64 qword_140C648C8;
// 140C7E9C0: using guessed type __int64 qword_140C7E9C0;
// 140C7E9C8: using guessed type __int64 qword_140C7E9C8;

