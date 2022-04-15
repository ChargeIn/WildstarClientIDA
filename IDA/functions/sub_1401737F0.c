//----- (00000001401737F0) ----------------------------------------------------
char __fastcall sub_1401737F0(__int64 a1, float a2, int a3)
{
	__int64 v5; // rax
	WCHAR* v6; // rcx
	float v7; // xmm11_4
	float v8; // xmm10_4
	char result; // al
	int v10; // [rsp+40h] [rbp-98h] BYREF
	WCHAR v11[16]; // [rsp+48h] [rbp-90h] BYREF

	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1040) + 112i64))(*(_QWORD*)(a1 + 1040));
	v6 = (WCHAR*)&unk_1409DD974;
	if (v5)
		v6 = (WCHAR*)v5;
	v7 = *(double*)sub_1407DFD50(v6, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
	v8 = fmaxf(*(float*)(a1 + 1052), fminf(*(float*)(a1 + 1056), a2));
	if (a3 && (int)sub_14034BF80(v11, 16i64, L"%.*f", *(unsigned int*)(a1 + 1048), v8) >= 0)
		v8 = *(double*)sub_1407DFD50(v11, 0i64, (_OWORD*)qword_140C7AAC8).m128_u64;
	v10 = 1;
	result = sub_1400D4070(a1, 0x46u, (char*)a1, "ff>b", v8, v7, &v10);
	if (v10)
	{
		sub_140173980(a1, v8);
		return sub_1400D4070(a1, 0x47u, (char*)a1, byte_1409DDA0C, v8, v7);
	}
	return result;
}
// 1409DDA0C: using guessed type _BYTE byte_1409DDA0C[32];
// 140A38DD0: using guessed type wchar_t asc_140A38DD0[5];
// 140C7AAC8: using guessed type __int64 qword_140C7AAC8;
// 1401737F0: using guessed type WCHAR var_90[16];

