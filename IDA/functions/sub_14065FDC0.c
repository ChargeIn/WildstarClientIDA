//----- (000000014065FDC0) ----------------------------------------------------
__int64 __fastcall sub_14065FDC0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebx
	int* v6; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rbp
	__int64 v10; // r14
	void(__fastcall * **v11)(_QWORD); // rbx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	_QWORD* v14; // rax
	__int64 v15; // r8
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v18; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-28h] BYREF
	int v20; // [rsp+38h] [rbp-20h]
	_QWORD* v21; // [rsp+40h] [rbp-18h]
	int v22; // [rsp+48h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v21 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v19 = off_140B569F0;
	v22 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v20 = v5;
	v6 = (int*)sub_1406622C0((__int64)v1, 1);
	if (v6 && (v7 = sub_1403D90D0(qword_140C65898, *v6)) != 0 && v7 == *(_QWORD*)(qword_140C65898 + 120))
	{
		v8 = 0i64;
		v18 = 0i64;
		v17 = 0i64;
		sub_1403D6710(qword_140C65898 + 184, &v17);
		v9 = v18;
		v10 = v17;
		if (v18)
		{
			do
			{
				v11 = *(void(__fastcall****)(_QWORD))(v10 + 8 * v8);
				if (v11
					&& ((unsigned int(__fastcall*)(_QWORD))(*v11)[12])(*(_QWORD*)(v10 + 8 * v8))
					&& (*(unsigned int(__fastcall**)(__int64, void(__fastcall**)(_QWORD)))(*(_QWORD*)qword_140C65BB8 + 8i64))(
						qword_140C65BB8,
						v11[8])
					&& (unsigned int)sub_140415D60(v1, v11))
				{
					sub_1400FB470((__int64)&v19);
					v1 = v21;
					v21[2] -= 16i64;
				}
				++v8;
			} while (v8 < v9);
			v5 = v20;
		}
		v12 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v13 = v1[2];
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		v1[2] += 16i64;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	}
	else
	{
		v14 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v15 = v1[2];
		*(_QWORD*)v15 = *v14;
		v13 = *((unsigned int*)v14 + 2);
		*(_DWORD*)(v15 + 8) = v13;
		v1[2] += 16i64;
	}
	sub_1400579E0((__int64)v1, v13, v5);
	return 1i64;
}
// 14065FF6E: variable 'v13' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BB8: using guessed type __int64 qword_140C65BB8;

