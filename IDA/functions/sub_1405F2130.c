//----- (00000001405F2130) ----------------------------------------------------
void __fastcall sub_1405F2130(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v5; // rsi
	unsigned int v6; // r15d
	__int64 v7; // rax
	__int64 v8; // r12
	__int64 v9; // r14
	int* v10; // rax
	__int64 v11; // rbp
	int* v12; // rax
	int v13; // eax
	float v14; // [rsp+40h] [rbp-58h] BYREF
	unsigned int* v15; // [rsp+48h] [rbp-50h] BYREF
	unsigned int v16; // [rsp+50h] [rbp-48h]
	__int64 v17[3]; // [rsp+58h] [rbp-40h] BYREF
	unsigned int v18; // [rsp+B0h] [rbp+18h] BYREF
	int v19; // [rsp+B8h] [rbp+20h] BYREF

	if (!a3 && !*(_DWORD*)(a2 + 96))
	{
		v5 = 0i64;
		v14 = 3.4028235e38;
		v18 = 0;
		v19 = 0;
		v6 = 0;
		(*(void(__fastcall**)(_QWORD*, unsigned int**, __int64, _QWORD))(*a1 + 464i64))(a1, &v15, 1i64, 0i64);
		v7 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 48i64))(a1);
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			sub_1403F7E50(qword_140C65898, v15, v16, &v18, &v14, *(_DWORD*)(v7 + 496), (unsigned int*)&v19);
			v6 = v18;
		}
		v8 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 312i64))(a1);
		v9 = *(_QWORD*)(v8 + 8);
		if (v9)
		{
			v10 = sub_14018B280(8 * v9 + 16, 0);
			if (v10)
			{
				*((_QWORD*)v10 + 1) = v9;
				v11 = (__int64)(v10 + 4);
				*(_QWORD*)v10 = off_140B55060;
			}
			else
			{
				v11 = 16i64;
			}
		}
		else
		{
			v11 = 0i64;
		}
		sub_1407DB590((int*)v11, *(int**)v8, 8 * v9);
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			sub_1403F8070(qword_140C65898, v11, v9, &v18, &v14, (unsigned int*)&v19);
			v6 = v18;
		}
		if (v6)
		{
			v12 = *(int**)(a2 + 104);
			if (v12)
				v13 = *v12;
			else
				v13 = 0;
			if (v13 == v6)
			{
				if ((int)sub_1404862B0(a2) < 0)
				{
					a1[18] = 0i64;
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
				}
			}
			else
			{
				v17[0] = (__int64)a1;
				v17[1] = (__int64)sub_1405F2130;
				if (*(_DWORD*)qword_140C65920)
					v5 = sub_140486DC0(
						qword_140C65920,
						(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
						(_DWORD*)(a2 + 56),
						v17,
						v6,
						v19);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
				a1[18] = v5;
			}
		}
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		if (v15)
			(*(void(__fastcall**)(unsigned int*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 4);
	}
}
// 140B24370: using guessed type wchar_t aArtFxModelProp_24[66];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

