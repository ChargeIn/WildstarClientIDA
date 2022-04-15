//----- (0000000140933390) ----------------------------------------------------
BOOL __fastcall sub_140933390(__int64* a1)
{
	__int64 v2; // rcx
	__int64* v3; // rax
	__int64 v4; // r10
	__int64* v5; // r9
	__int64* v6; // r8
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx

	if (hMutex)
		WaitForSingleObject(hMutex, 0xFFFFFFFF);
	else
		hMutex = (LPSECURITY_ATTRIBUTES)CreateMutexA(hMutex, (int)hMutex + 1, 0i64);
	v2 = *(a1 - 2);
	v3 = a1 - 2;
	v4 = qword_140C63568 - v2;
	v5 = (__int64*)((char*)v3 - v3[1]);
	qword_140C63568 -= v2;
	if (*v5)
	{
		v6 = v3 + 4;
		v5 = a1 - 2;
		v3[4] = v2;
		v7 = qword_140C63560;
		*v3 = 0i64;
		*a1 = v7;
		v3[3] = 0i64;
		if (v7)
			*(_QWORD*)(v7 + 24) = v3;
		qword_140C63560 = (__int64)(a1 - 2);
	}
	else
	{
		v5[4] += v2;
		v6 = v5 + 4;
		*(__int64*)((char*)v5 + v5[4] + 8) = v5[4];
	}
	v8 = (__int64*)((char*)v5 + *v6);
	if (!*v8)
	{
		*v6 += v8[4];
		v9 = v8[2];
		if (v9)
			*(_QWORD*)(v9 + 24) = v8[3];
		v10 = v8[3];
		if (v10)
			*(_QWORD*)(v10 + 16) = v8[2];
		else
			qword_140C63560 = v8[2];
		v11 = *v6;
		*(__int64*)((char*)v5 + v11 + 8) = v11;
		v8 = (__int64*)((char*)v5 + v11);
	}
	if (!v5[1] && *v8 == 1i64 && qword_140C63570 - *v6 > (unsigned __int64)(3 * v4) >> 1)
	{
		qword_140C63570 -= *v6;
		v12 = v5[2];
		if (v12)
			*(_QWORD*)(v12 + 24) = v5[3];
		v13 = v5[3];
		if (v13)
			*(_QWORD*)(v13 + 16) = v5[2];
		else
			qword_140C63560 = v5[2];
		VirtualFree(v5, 0i64, 0x8000u);
	}
	return ReleaseMutex(hMutex);
}
// 140C63560: using guessed type __int64 qword_140C63560;
// 140C63568: using guessed type __int64 qword_140C63568;
// 140C63570: using guessed type __int64 qword_140C63570;

