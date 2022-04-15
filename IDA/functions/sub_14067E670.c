//----- (000000014067E670) ----------------------------------------------------
__int64 __fastcall sub_14067E670(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	int* v6; // rbx
	unsigned int v7; // r15d
	unsigned int v8; // r13d
	unsigned __int16* v9; // r14
	__int64 v10; // rdx
	__int64 v11; // r12
	int* v12; // rax
	int* v13; // rbp
	int v15; // [rsp+20h] [rbp-68h] BYREF
	int* v16; // [rsp+28h] [rbp-60h] BYREF
	__int64 v17; // [rsp+30h] [rbp-58h]
	__int64 v18; // [rsp+38h] [rbp-50h] BYREF
	unsigned __int16* v19; // [rsp+40h] [rbp-48h]

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& (v4 = *(_QWORD*)(v3 + 48), *(_DWORD*)(*(_QWORD*)v4 + 12i64) == 22)
		&& (v5 = 0i64, sub_14048D310(qword_140C65950, *(_DWORD*)(*(_QWORD*)v4 + 20i64))))
	{
		v6 = 0i64;
		v17 = 0i64;
		v16 = 0i64;
		v7 = 0;
		v8 = (int)sub_140056C40(a1, 2u);
		if (v8)
		{
			do
			{
				sub_14018EFA0(&v18, (__int64)L"Choice%d", ++v7);
				v9 = v19;
				sub_1400F0AD0((__int64)a1, v10, v19, &v15);
				v11 = v5 + 1;
				v12 = sub_14018DB00((__int64)v6, v5 + 1, 4i64);
				v13 = v12;
				v12[v5] = v15;
				if (v6 != v12)
				{
					sub_1407DB590(v12, v6, 4 * v5);
					if (v6)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
					v6 = v13;
				}
				++v5;
				if (v9)
					sub_14018B900((__int64)v9, 0);
			} while (v7 < v8);
			v17 = v11;
			v16 = v6;
		}
		if (*(_QWORD*)(qword_140C65950 + 112))
		{
			sub_140619220(qword_140C65950, (__int64*)&v16);
			v6 = v16;
		}
		if (v6)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v6 - 2) + 8i64))(v6 - 4);
		return 0i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14067E747: variable 'v10' is possibly undefined
// 140B31758: using guessed type wchar_t aChoiceD[9];
// 140C65950: using guessed type __int64 qword_140C65950;

