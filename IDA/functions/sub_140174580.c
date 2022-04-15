//----- (0000000140174580) ----------------------------------------------------
__int64 __fastcall sub_140174580(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	WCHAR* v4; // rcx
	double v5; // xmm0_8
	__int64 v6; // rax
	float v7; // xmm1_4

	v2 = sub_140174120(a1);
	v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 1040) + 112i64))(*(_QWORD*)(v2 + 1040));
	v4 = (WCHAR*)&unk_1409DD974;
	if (v3)
		v4 = (WCHAR*)v3;
	v5 = *(double*)sub_1407DFD50(v4, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
	v6 = a1[2];
	*(_DWORD*)(v6 + 8) = 3;
	v7 = v5;
	*(double*)v6 = v7;
	a1[2] += 16i64;
	return 1i64;
}
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;

