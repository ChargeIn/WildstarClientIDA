//----- (0000000140555040) ----------------------------------------------------
void __fastcall sub_140555040(__int64 a1)
{
	int v2; // edx
	__int64 v3; // rax
	_BYTE* v4; // rdi
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int16* v7; // rax
	_QWORD* v8; // rax
	__int16* v9; // rax
	_QWORD* v10; // rax
	__int16* v11; // rax
	_QWORD* v12; // rax
	__int16* v13; // rax
	_QWORD* v14; // rax
	__int16* v15; // rax
	_QWORD* v16; // rax
	int v17; // edx
	__int64 v18; // rax
	int v19; // eax
	unsigned int v20; // ecx
	__int64 v21; // rax
	__int64 v22; // rdx
	_QWORD** v23; // rcx
	_QWORD* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // [rsp+40h] [rbp-28h] BYREF
	__int64 v27; // [rsp+48h] [rbp-20h]

	sub_140554F80((_QWORD*)a1);
	v2 = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, v2);
		v4 = (_BYTE*)v3;
		if (!v3)
			return;
		v5 = *(_QWORD*)(v3 + 24);
		if (!v5)
			return;
		sub_140555350(a1, v5);
		if (v4[9948])
		{
			v7 = sub_14034BDD0(v6, 20690);
			v8 = sub_14018F0E0(&v26, (unsigned __int16*)v7);
			sub_1405564F0(a1, 1, (int*)v8[1], 0, 0, 0, 0);
			v6 = v27;
			if (v27)
				sub_14018B900(v27, 0);
		}
		if (v4[9516])
		{
			v9 = sub_14034BDD0(v6, 232615);
			v10 = sub_14018F0E0(&v26, (unsigned __int16*)v9);
			sub_1405564F0(a1, 1, (int*)v10[1], 2, 0, 0, 0);
			v6 = v27;
			if (v27)
				sub_14018B900(v27, 0);
		}
		if (v4[9588])
		{
			v11 = sub_14034BDD0(v6, 235148);
			v12 = sub_14018F0E0(&v26, (unsigned __int16*)v11);
			sub_1405564F0(a1, 1, (int*)v12[1], 3, 0, 0, 0);
			v6 = v27;
			if (v27)
				sub_14018B900(v27, 0);
		}
		if (v4[11460])
		{
			v13 = sub_14034BDD0(v6, 286184);
			v14 = sub_14018F0E0(&v26, (unsigned __int16*)v13);
			sub_1405564F0(a1, 1, (int*)v14[1], 4, 0, 0, 0);
			v6 = v27;
			if (v27)
				sub_14018B900(v27, 0);
		}
		if (v4[11532])
		{
			v15 = sub_14034BDD0(v6, 286185);
			v16 = sub_14018F0E0(&v26, (unsigned __int16*)v15);
			sub_1405564F0(a1, 1, (int*)v16[1], 5, 0, 0, 0);
			if (v27)
				sub_14018B900(v27, 0);
		}
	}
	else
	{
		v17 = *(_DWORD*)(a1 + 8);
		if (v17)
		{
			v18 = sub_1404835C0(qword_140C65918, v17);
			sub_140555350(a1, v18);
		}
		else
		{
			v19 = *(_DWORD*)(a1 + 12);
			if (v19 < 300)
			{
				v20 = *(_DWORD*)(a1 + 16);
				if (v20 != -1 && (v19 || v20 < 0x1F))
				{
					v21 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 12));
					if (v21)
						sub_1405561F0(a1, *(_QWORD*)(v21 + 64));
				}
			}
		}
	}
	v22 = 0i64;
	v23 = *(_QWORD***)(*(_QWORD*)(a1 + 112) + 24i64);
	v24 = *v23;
	if (*v23 != v23)
	{
		do
		{
			v24 = (_QWORD*)*v24;
			++v22;
		} while (v24 != v23);
		if (v22)
		{
			v25 = sub_1405582B0(a1, &v26, 9, 0i64, 0, 0);
			sub_1405564F0(a1, 1, (int*)v25[1], 9, 0, 0, 0);
			if (v27)
				sub_14018B900(v27, 0);
		}
	}
}
// 14055509F: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;

