//----- (000000014005B420) ----------------------------------------------------
void __fastcall sub_14005B420(__int64 a1, _QWORD* a2)
{
	bool v2; // zf
	__int64 v3; // rdi
	__int64 v6; // rbp
	__int64 v7; // r15
	__int64 v8; // rdi
	__int64 v9; // rsi
	__int64 v10; // r8
	__int64 v11; // rdi
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	v2 = *((_DWORD*)a2 + 7) == 0;
	v3 = *(int*)(a1 + 76);
	LODWORD(v12) = *(_DWORD*)(a1 + 76);
	if (v2)
		*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v12, 4i64, a2[2]);
	v6 = 0i64;
	v7 = v3;
	if ((int)v3 > 0)
	{
		v8 = 0i64;
		do
		{
			v9 = *(_QWORD*)(a1 + 16);
			LOBYTE(v12) = *(_BYTE*)(v8 + v9 + 8);
			if (!*((_DWORD*)a2 + 7))
				*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(
					*a2,
					&v12,
					1i64,
					a2[2]);
			if (*(_DWORD*)(v8 + v9 + 8) == 1)
			{
				LOBYTE(v12) = *(_BYTE*)(v8 + v9);
				if (!*((_DWORD*)a2 + 7))
				{
					v10 = 1i64;
					goto LABEL_15;
				}
			}
			else
			{
				if (*(_DWORD*)(v8 + v9 + 8) != 3)
				{
					if (*(_DWORD*)(v8 + v9 + 8) == 4)
						sub_14005B390(*(_QWORD*)(v8 + v9), a2);
					goto LABEL_16;
				}
				v12 = *(_QWORD*)(v8 + v9);
				if (!*((_DWORD*)a2 + 7))
				{
					v10 = 8i64;
				LABEL_15:
					*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(
						*a2,
						&v12,
						v10,
						a2[2]);
				}
			}
		LABEL_16:
			v8 += 16i64;
			--v7;
		} while (v7);
	}
	v11 = *(int*)(a1 + 88);
	LODWORD(v12) = *(_DWORD*)(a1 + 88);
	if (!*((_DWORD*)a2 + 7))
		*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v12, 4i64, a2[2]);
	if (v11 > 0)
	{
		do
			sub_14005B740(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v6++), *(_QWORD*)(a1 + 64), a2);
		while (v6 < v11);
	}
}
// 14005B740: using guessed type __int64 __fastcall sub_14005B740(_QWORD, _QWORD, _QWORD);

