//----- (0000000140338A20) ----------------------------------------------------
void __fastcall sub_140338A20(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // r9
	volatile signed __int32* v7; // rcx
	volatile signed __int32* v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // r13
	int* v13; // r15
	char* v14; // rax
	volatile signed __int32* v15; // rcx
	char* v16; // rax
	__int64 v17; // r14
	__int64 v18; // rdi
	char* v19; // r12
	__int64* v20; // rbx
	__int64 v21; // rcx
	__int64 v22; // [rsp+30h] [rbp-58h]
	__int64 v23; // [rsp+38h] [rbp-50h]
	__int64 v24; // [rsp+40h] [rbp-48h]
	volatile signed __int32* v25; // [rsp+50h] [rbp-38h]
	__int64 v26; // [rsp+58h] [rbp-30h]

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v10 = ((__int64)v3 - a1[1]) / 48;
		if (v10)
			v11 = 2 * v10;
		else
			v11 = 1i64;
		v12 = 12 * (sub_14018A3E0(48 * v11) / 0x30ui64);
		v13 = sub_14018B280(v12 * 4, 0);
		v14 = sub_140338C90((_QWORD*)a1[1], a2, (char*)v13);
		if (v14)
		{
			*(_QWORD*)v14 = *a3;
			*((_QWORD*)v14 + 1) = a3[1];
			*((_QWORD*)v14 + 2) = a3[2];
			v15 = (volatile signed __int32*)a3[4];
			*((_QWORD*)v14 + 4) = v15;
			*((_QWORD*)v14 + 5) = a3[5];
			_InterlockedIncrement(v15);
		}
		v16 = sub_140338C90(a2, (_QWORD*)a1[2], v14 + 48);
		v17 = a1[2];
		v18 = a1[1];
		v19 = v16;
		if (v18 != v17)
		{
			v20 = (__int64*)(v18 + 32);
			do
			{
				if (!_InterlockedDecrement((volatile signed __int32*)*v20))
				{
					sub_14018B900(v20[1], 0);
					sub_14018B900(*v20, 0);
				}
				v18 += 48i64;
				v20 += 6;
			} while (v18 != v17);
		}
		v21 = a1[1];
		if (v21)
			sub_14018B900(v21, 0);
		a1[1] = v13;
		a1[2] = v19;
		a1[3] = &v13[v12];
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 6);
			v3[1] = *(v3 - 5);
			v3[2] = *(v3 - 4);
			v7 = (volatile signed __int32*)*(v3 - 2);
			v3[4] = v7;
			v3[5] = *(v3 - 1);
			_InterlockedIncrement(v7);
		}
		a1[2] += 48i64;
		v22 = *a3;
		v25 = (volatile signed __int32*)a3[4];
		v23 = a3[1];
		v24 = a3[2];
		v26 = a3[5];
		_InterlockedIncrement(v25);
		sub_140338CF0((__int64)a2, a1[2] - 96i64, a1[2] - 48i64);
		*a2 = v22;
		a2[1] = v23;
		a2[2] = v24;
		_InterlockedIncrement(v25);
		v8 = (volatile signed __int32*)a2[4];
		a2[4] = v25;
		v9 = a2[5];
		a2[5] = v26;
		if (!_InterlockedDecrement(v8))
		{
			sub_14018B900(v9, 0);
			sub_14018B900((__int64)v8, 0);
		}
		if (!_InterlockedDecrement(v25))
		{
			sub_14018B900(v26, 0);
			sub_14018B900((__int64)v25, 0);
		}
	}
}

