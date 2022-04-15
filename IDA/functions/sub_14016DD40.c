//----- (000000014016DD40) ----------------------------------------------------
char __fastcall sub_14016DD40(__int64 a1, int* a2)
{
	int v2; // eax
	int v4; // ecx
	bool v6; // r12
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rbx
	__int64 v10; // r14
	int v11; // eax
	__int64 v12; // rdi
	__int64* v13; // rdi
	__int64 v14; // rcx
	__int64* v15; // rsi
	__int64** v16; // rax
	int v18; // [rsp+28h] [rbp-30h]
	int v19; // [rsp+60h] [rbp+8h] BYREF
	int v20; // [rsp+68h] [rbp+10h] BYREF

	v2 = *a2;
	v4 = *(_DWORD*)(a1 + 1568);
	v6 = 1;
	if (*a2 != v4)
	{
		v20 = v4;
		v19 = v2;
		if (!sub_140170340(a1, &v20, &v19))
			v6 = 0;
	}
	v19 = *a2;
	LOBYTE(v7) = sub_14016DC40(a1, &v19);
	v9 = *a2;
	if ((_DWORD)v9)
	{
		if ((int)v9 < 0 || (int)v9 >= (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
			v10 = 0i64;
		else
			v10 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v9);
		v11 = *(_DWORD*)(v10 + 104);
		if (v11 < 0 || v11 >= (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
			v12 = 0i64;
		else
			v12 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8i64 * *(int*)(v10 + 104));
		v13 = *(__int64**)(v12 + 96);
		v14 = *v13;
		if ((__int64*)*v13 != v13)
		{
			do
			{
				v15 = *(__int64**)v14;
				if (*(_DWORD*)(v14 + 16) == (_DWORD)v9)
				{
					v16 = *(__int64***)(v14 + 8);
					*v16 = v15;
					v15[1] = (__int64)v16;
					sub_14018B900(v14, 0);
				}
				v14 = (__int64)v15;
			} while (v15 != v13);
		}
		sub_14016CB60(v10, v8);
		sub_14018B900(v10, 0);
		v7 = *(_QWORD*)(a1 + 1416);
		*(_QWORD*)(v7 + 8i64 * *a2) = 0i64;
		*(_BYTE*)(a1 + 1368) = 1;
	}
	if (v6)
	{
		*(_DWORD*)(a1 + 1568) = -1;
		v18 = *(_DWORD*)(a1 + 1568);
		LOBYTE(v7) = sub_1400D4070(a1, 0x42u, (char*)a1, byte_1409DD484, v18, v18);
	}
	return v7;
}
// 14016DE4A: variable 'v8' is possibly undefined
// 1409DD484: using guessed type _BYTE byte_1409DD484[4];

