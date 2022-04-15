//----- (00000001401A7BD0) ----------------------------------------------------
__int64 __fastcall sub_1401A7BD0(__int64 a1, const __m128i* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rbx
	unsigned int v8; // eax
	unsigned int v9; // edi
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	sub_1401A59A0(a1);
	*(_DWORD*)(a1 + 92) = 0;
	v4 = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(a1 + 104) = 0i64;
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	sub_14018B900(*(_QWORD*)(a1 + 112), 0);
	*(_QWORD*)(a1 + 112) = 0i64;
	v11 = 0i64;
	v6 = sub_1401B6D00(v5, a2, &v11);
	v7 = v11;
	if (v6 >= 0)
		v8 = sub_1401A7C70(a1, v11);
	else
		v8 = sub_1401A81B0(a1, v6, (__int64)a2);
	v9 = v8;
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return v9;
}
// 1401A7C23: variable 'v5' is possibly undefined

