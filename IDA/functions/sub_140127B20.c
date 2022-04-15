//----- (0000000140127B20) ----------------------------------------------------
__int64 __fastcall sub_140127B20(__int64 a1, int a2)
{
	__int64 v4; // rax
	WCHAR* v5; // rdi
	WCHAR* v6; // rcx
	__int64 v7; // rax
	WCHAR* v8; // rcx
	__int64 v9; // rax
	WCHAR* v10; // rcx
	__int64 v11; // rax
	WCHAR* v12; // rcx
	__int64 v13; // rax
	WCHAR* v14; // rcx
	__int64 v15; // rax
	float v16; // xmm0_4
	__int64 v17; // rcx
	float v18; // xmm0_4
	__int64 v19; // rcx
	float v20; // xmm0_4
	__int64 v21; // rcx
	float v22; // xmm0_4
	__int64 v23; // rcx
	float v24; // xmm0_4
	float v25; // xmm0_4
	__int64 v26; // rcx
	float v27; // xmm0_4
	__int64 v28; // rcx
	float v29; // xmm0_4
	__int64 v30; // rcx
	float v31; // xmm0_4
	__int64 v32; // rcx
	float v33; // xmm0_4
	__int64 v34; // rcx
	float v35; // xmm0_4
	__int64 v36; // rcx

	v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1264) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1264) + 1040i64));
	v5 = (WCHAR*)&unk_1409DD974;
	v6 = (WCHAR*)&unk_1409DD974;
	if (v4)
		v6 = (WCHAR*)v4;
	sub_1407DFD50(v6, 0i64, (_OWORD*)qword_140C7AAC8);
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1272) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1272) + 1040i64));
	v8 = (WCHAR*)&unk_1409DD974;
	if (v7)
		v8 = (WCHAR*)v7;
	sub_1407DFD50(v8, 0i64, (_OWORD*)qword_140C7AAC8);
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1280) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1280) + 1040i64));
	v10 = (WCHAR*)&unk_1409DD974;
	if (v9)
		v10 = (WCHAR*)v9;
	sub_1407DFD50(v10, 0i64, (_OWORD*)qword_140C7AAC8);
	*(_DWORD*)(a1 + 1040) = a2;
	sub_140127EC0(a1);
	v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1264) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1264) + 1040i64));
	v12 = (WCHAR*)&unk_1409DD974;
	if (v11)
		v12 = (WCHAR*)v11;
	sub_1407DFD50(v12, 0i64, (_OWORD*)qword_140C7AAC8);
	v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1272) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1272) + 1040i64));
	v14 = (WCHAR*)&unk_1409DD974;
	if (v13)
		v14 = (WCHAR*)v13;
	sub_1407DFD50(v14, 0i64, (_OWORD*)qword_140C7AAC8);
	v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1280) + 1040i64) + 112i64))(*(_QWORD*)(*(_QWORD*)(a1 + 1280) + 1040i64));
	if (v15)
		v5 = (WCHAR*)v15;
	sub_1407DFD50(v5, 0i64, (_OWORD*)qword_140C7AAC8);
	switch (*(_DWORD*)(a1 + 1044))
	{
	case 0:
		v16 = sub_1401737B0(*(_QWORD*)(a1 + 1240));
		v17 = *(_QWORD*)(a1 + 1248);
		*(_DWORD*)(a1 + 1048) = 255 - (int)v16;
		*(_DWORD*)(a1 + 1056) = 255 - (int)sub_1401737B0(v17);
		goto LABEL_15;
	case 1:
		v18 = sub_1401737B0(*(_QWORD*)(a1 + 1240));
		v19 = *(_QWORD*)(a1 + 1248);
		*(_DWORD*)(a1 + 1056) = 255 - (int)v18;
		*(_DWORD*)(a1 + 1048) = 255 - (int)sub_1401737B0(v19);
	LABEL_15:
		*(_DWORD*)(a1 + 1052) = (int)sub_1401737B0(*(_QWORD*)(a1 + 1256));
		return sub_140128250(a1);
	case 2:
		v20 = sub_1401737B0(*(_QWORD*)(a1 + 1240));
		v21 = *(_QWORD*)(a1 + 1248);
		*(_DWORD*)(a1 + 1052) = (int)v20;
		v22 = sub_1401737B0(v21);
		v23 = *(_QWORD*)(a1 + 1256);
		*(_DWORD*)(a1 + 1056) = 255 - (int)v22;
		v24 = sub_1401737B0(v23);
		goto LABEL_21;
	case 3:
		v25 = sub_1401737B0(*(_QWORD*)(a1 + 1264));
		v26 = *(_QWORD*)(a1 + 1272);
		*(_DWORD*)(a1 + 1048) = 255 - (int)(float)(v25 * 0.71030641);
		v27 = sub_1401737B0(v26);
		v28 = *(_QWORD*)(a1 + 1280);
		*(_DWORD*)(a1 + 1052) = (int)(float)(v27 * 2.55);
		*(_DWORD*)(a1 + 1056) = 255 - (int)(float)(sub_1401737B0(v28) * 2.55);
		return sub_140128250(a1);
	case 4:
		v29 = sub_1401737B0(*(_QWORD*)(a1 + 1264));
		v30 = *(_QWORD*)(a1 + 1272);
		*(_DWORD*)(a1 + 1052) = (int)(float)(v29 * 0.71030641);
		v31 = sub_1401737B0(v30);
		v32 = *(_QWORD*)(a1 + 1280);
		*(_DWORD*)(a1 + 1048) = 255 - (int)(float)(v31 * 2.55);
		*(_DWORD*)(a1 + 1056) = 255 - (int)(float)(sub_1401737B0(v32) * 2.55);
		return sub_140128250(a1);
	case 5:
		v33 = sub_1401737B0(*(_QWORD*)(a1 + 1264));
		v34 = *(_QWORD*)(a1 + 1272);
		*(_DWORD*)(a1 + 1052) = (int)(float)(v33 * 0.71030641);
		v35 = sub_1401737B0(v34);
		v36 = *(_QWORD*)(a1 + 1280);
		*(_DWORD*)(a1 + 1056) = 255 - (int)(float)(v35 * 2.55);
		v24 = sub_1401737B0(v36) * 2.55;
	LABEL_21:
		*(_DWORD*)(a1 + 1048) = 255 - (int)v24;
		break;
	default:
		return sub_140128250(a1);
	}
	return sub_140128250(a1);
}
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

