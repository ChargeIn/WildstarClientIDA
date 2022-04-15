//----- (000000014050A3C0) ----------------------------------------------------
int** __fastcall sub_14050A3C0(int** a1)
{
	int* v2; // rdi
	int* v3; // rdi
	int* v4; // rdi
	int* v5; // rdi
	int* v6; // rdi
	int* v7; // rdi
	int* v8; // rdi
	int* v9; // rdi
	int* v10; // rdi
	int* v11; // rdi
	int* v12; // rdi
	int* v13; // rdi
	int* v14; // rdi
	int* v15; // rdi
	int* v16; // rdi
	int* v17; // rdi
	int* v18; // rdi
	int* v19; // rdi
	int* v20; // rdi
	int* v21; // rdi
	int* v22; // rdi
	int* v23; // rdi
	int* v24; // rdi
	int* v25; // rdi
	int* v26; // rdi
	int* v27; // rdi
	int* v28; // rdi
	int* v29; // rdi
	int* v30; // rdi
	int* v31; // rdi
	int* v32; // rdi
	int* v33; // rdi
	int* v34; // rdi
	int* v35; // rdi
	int* v36; // rdi
	int* v37; // rdi
	int* v38; // rdi
	int* v39; // rdi
	int* v40; // rdi
	int* v41; // rdi
	int* v42; // rdi
	int* v43; // rdi
	int* v44; // rdi
	int* v45; // rdi
	int* v46; // rdi
	int* v47; // rdi
	int* v48; // rdi
	int* v49; // rdi
	int* v50; // rdi
	int* v51; // rax

	v2 = sub_14018B280(1i64, 0);
	if (v2)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Unit", (__int64)sub_1406481D0);
	else
		v2 = 0i64;
	*a1 = v2;
	v3 = sub_14018B280(1i64, 0);
	if (v3)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"CharacterTitle", (__int64)sub_14072C500);
	else
		v3 = 0i64;
	a1[1] = v3;
	v4 = sub_14018B280(1i64, 0);
	if (v4)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Item", (__int64)sub_140413A20);
	else
		v4 = 0i64;
	a1[2] = v4;
	v5 = sub_14018B280(1i64, 0);
	if (v5)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Spell", (__int64)sub_1405E8230);
	else
		v5 = 0i64;
	a1[3] = v5;
	v6 = sub_14018B280(1i64, 0);
	if (v6)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Money", (__int64)sub_140500A10);
	else
		v6 = 0i64;
	a1[4] = v6;
	v7 = sub_14018B280(4i64, 0);
	if (v7)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Episode", (__int64)sub_14072D2A0);
	else
		v7 = 0i64;
	a1[5] = v7;
	v8 = sub_14018B280(4i64, 0);
	if (v8)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Quest", (__int64)sub_1406625D0);
	else
		v8 = 0i64;
	a1[6] = v8;
	v9 = sub_14018B280(1i64, 0);
	if (v9)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"PathMission", (__int64)sub_140679E50);
	else
		v9 = 0i64;
	a1[7] = v9;
	v10 = sub_14018B280(1i64, 0);
	if (v10)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"PathEpisode", (__int64)sub_140679210);
	else
		v10 = 0i64;
	a1[8] = v10;
	v11 = sub_14018B280(1i64, 0);
	if (v11)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"PublicEvent", (__int64)sub_140687D40);
	else
		v11 = 0i64;
	a1[9] = v11;
	v12 = sub_14018B280(1i64, 0);
	if (v12)
		sub_1400F2440(
			*(_QWORD*)(qword_140C65898 + 29504) + 384i64,
			(__int64)"PublicEventObjective",
			(__int64)sub_14068C2C0);
	else
		v12 = 0i64;
	a1[10] = v12;
	v13 = sub_14018B280(4i64, 0);
	if (v13)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"DialogResponse", (__int64)sub_14072EE90);
	else
		v13 = 0i64;
	a1[11] = v13;
	v14 = sub_14018B280(1i64, 0);
	if (v14)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"MailSystemLib", (__int64)sub_1406B5F60);
	else
		v14 = 0i64;
	a1[33] = v14;
	v15 = sub_14018B280(1i64, 0);
	if (v15)
	{
		if (!qword_140C665E8)
		{
			sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"ChatSystemLib", (__int64)sub_14072FAE0);
			qword_140C665E8 = (__int64)v15;
		}
	}
	else
	{
		v15 = 0i64;
	}
	a1[34] = v15;
	v16 = sub_14018B280(1i64, 0);
	if (v16)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"HousingLib", (__int64)sub_140737DA0);
	else
		v16 = 0i64;
	a1[35] = v16;
	v17 = sub_14018B280(1i64, 0);
	if (v17)
		sub_1400F2440(
			*(_QWORD*)(qword_140C65898 + 29504) + 384i64,
			(__int64)"GalacticArchiveArticle",
			(__int64)sub_14066AA40);
	else
		v17 = 0i64;
	a1[12] = v17;
	v18 = sub_14018B280(1i64, 0);
	if (v18)
		sub_1400F2440(
			*(_QWORD*)(qword_140C65898 + 29504) + 384i64,
			(__int64)"GalacticArchiveEntry",
			(__int64)sub_14066C710);
	else
		v18 = 0i64;
	a1[13] = v18;
	v19 = sub_14018B280(1i64, 0);
	if (v19)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"CraftingLib", (__int64)sub_1405A3000);
	else
		v19 = 0i64;
	a1[36] = v19;
	v20 = sub_14018B280(1i64, 0);
	if (v20)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Challenges", (__int64)sub_140684F50);
	else
		v20 = 0i64;
	a1[14] = v20;
	v21 = sub_14018B280(1i64, 0);
	if (v21)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"SettlerImprovement", (__int64)sub_140680FE0);
	else
		v21 = 0i64;
	a1[15] = v21;
	v22 = sub_14018B280(1i64, 0);
	if (v22)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"SoldierImprovement", (__int64)sub_140682420);
	else
		v22 = 0i64;
	a1[16] = v22;
	v23 = sub_14018B280(1i64, 0);
	if (v23)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"SoldierEvent", (__int64)sub_140682BD0);
	else
		v23 = 0i64;
	a1[17] = v23;
	v24 = sub_14018B280(1i64, 0);
	if (v24)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"ChatChannelLib", (__int64)sub_140691690);
	else
		v24 = 0i64;
	a1[18] = v24;
	v25 = sub_14018B280(1i64, 0);
	if (v25)
		sub_1400F2440(
			*(_QWORD*)(qword_140C65898 + 29504) + 384i64,
			(__int64)"ScientistScanBotProfile",
			(__int64)sub_140684050);
	else
		v25 = 0i64;
	a1[19] = v25;
	v26 = sub_14018B280(1i64, 0);
	if (v26)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Achievement", (__int64)sub_140693310);
	else
		v26 = 0i64;
	a1[20] = v26;
	v27 = sub_14018B280(1i64, 0);
	if (v27)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"GuildTypeLib", (__int64)sub_140695C20);
	else
		v27 = 0i64;
	a1[21] = v27;
	v28 = sub_14018B280(1i64, 0);
	if (v28)
		sub_1400F2440(
			*(_QWORD*)(qword_140C65898 + 29504) + 384i64,
			(__int64)"RecruitmentGuildTypeLib",
			(__int64)sub_14069E390);
	else
		v28 = 0i64;
	a1[22] = v28;
	v29 = sub_14018B280(1i64, 0);
	if (v29)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"MatchMakingEntry", (__int64)sub_14073A250);
	else
		v29 = 0i64;
	a1[23] = v29;
	v30 = sub_14018B280(4i64, 0);
	if (v30)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"QuestCategory", (__int64)sub_14069F140);
	else
		v30 = 0i64;
	a1[24] = v30;
	v31 = sub_14018B280(1i64, 0);
	if (v31)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"HexGroups", (__int64)sub_14069F8D0);
	else
		v31 = 0i64;
	a1[25] = v31;
	v32 = sub_14018B280(1i64, 0);
	if (v32)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"CommodityOrder", (__int64)sub_1406A07B0);
	else
		v32 = 0i64;
	a1[26] = v32;
	v33 = sub_14018B280(1i64, 0);
	if (v33)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"ItemAuction", (__int64)sub_1406A1300);
	else
		v33 = 0i64;
	a1[27] = v33;
	v34 = sub_14018B280(1i64, 0);
	if (v34)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"PetCustomization", (__int64)sub_1406B6B50);
	else
		v34 = 0i64;
	a1[28] = v34;
	v35 = sub_14018B280(1i64, 0);
	if (v35)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"PetFlair", (__int64)sub_1406B63D0);
	else
		v35 = 0i64;
	a1[29] = v35;
	v36 = sub_14018B280(1i64, 0);
	if (v36)
		sub_1400F2440(
			*(_QWORD*)(qword_140C65898 + 29504) + 384i64,
			(__int64)"CustomerSurveyTypeLib",
			(__int64)sub_14073C7D0);
	else
		v36 = 0i64;
	a1[30] = v36;
	v37 = sub_14018B280(1i64, 0);
	if (v37)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"CustomerSurveyLib", (__int64)sub_14073D980);
	else
		v37 = 0i64;
	a1[37] = v37;
	v38 = sub_14018B280(1i64, 0);
	if (v38)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"LiveEvent", (__int64)sub_1406B7C10);
	else
		v38 = 0i64;
	a1[31] = v38;
	v39 = sub_14018B280(1i64, 0);
	if (v39)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"CREDDExchangeOrder", (__int64)sub_1406F1C70);
	else
		v39 = 0i64;
	a1[38] = v39;
	v40 = sub_14018B280(1i64, 0);
	if (v40)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"GenericMapNode", (__int64)sub_1406A2450);
	else
		v40 = 0i64;
	a1[32] = v40;
	v41 = sub_14018B280(1i64, 0);
	if (v41)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"IncidentReportLib", (__int64)sub_14073E860);
	else
		v41 = 0i64;
	a1[39] = v41;
	v42 = sub_14018B280(1i64, 0);
	if (v42)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Contract", (__int64)sub_1406A2EC0);
	else
		v42 = 0i64;
	a1[40] = v42;
	v43 = sub_14018B280(1i64, 0);
	if (v43)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"RewardTrack", (__int64)sub_1406B9550);
	else
		v43 = 0i64;
	a1[41] = v43;
	v44 = sub_14018B280(1i64, 0);
	if (v44)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Costume", (__int64)sub_14073FFC0);
	else
		v44 = 0i64;
	a1[42] = v44;
	v45 = sub_14018B280(1i64, 0);
	if (v45)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"ICComm", (__int64)sub_1406A4500);
	else
		v45 = 0i64;
	a1[43] = v45;
	v46 = sub_14018B280(1i64, 0);
	if (v46)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"QuestHub", (__int64)sub_1407415C0);
	else
		v46 = 0i64;
	a1[44] = v46;
	v47 = sub_14018B280(4i64, 0);
	if (v47)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"HousingPlot", (__int64)sub_1406A4F80);
	else
		v47 = 0i64;
	a1[45] = v47;
	v48 = sub_14018B280(4i64, 0);
	if (v48)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Residence", (__int64)sub_1406A9230);
	else
		v48 = 0i64;
	a1[46] = v48;
	v49 = sub_14018B280(4i64, 0);
	if (v49)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"Decor", (__int64)sub_1406ADFD0);
	else
		v49 = 0i64;
	a1[47] = v49;
	v50 = sub_14018B280(1i64, 0);
	if (v50)
		sub_1400F2440(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, (__int64)"CommDialog", (__int64)sub_140742040);
	else
		v50 = 0i64;
	a1[48] = v50;
	sub_14050B520();
	if (!qword_140C65A58)
	{
		v51 = sub_14018B280(8i64, 0);
		if (v51)
		{
			qword_140C65A58 = (__int64)v51;
			*(_QWORD*)v51 = off_140B6A710;
			sub_14053A750();
			return a1;
		}
		qword_140C65A58 = 0i64;
		sub_14053A750();
	}
	return a1;
}
// 140B6A710: using guessed type __int64 (__fastcall *off_140B6A710[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A58: using guessed type __int64 qword_140C65A58;
// 140C665E8: using guessed type __int64 qword_140C665E8;

