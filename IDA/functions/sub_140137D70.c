//----- (0000000140137D70) ----------------------------------------------------
void __fastcall sub_140137D70(__int64 a1, int a2)
{
	__int64 v4; // rdi
	_QWORD** v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rbp
	_QWORD* v8; // rax
	__int64 v9; // rdx
	bool v10; // al
	_QWORD* v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // rdx

	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 400i64);
	v5 = *(_QWORD***)(a1 + 456);
	v6 = *v5;
	if (*v5 != v5)
	{
		while (1)
		{
			if (v6 != *v5)
			{
				v7 = v6[2];
				v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), a2);
				v9 = *(_QWORD*)(v4 + 16);
				*(_QWORD*)v9 = *v8;
				*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
				*(_QWORD*)(v4 + 16) += 16i64;
				v10 = sub_140134C00(v7, v4, -1);
				*(_QWORD*)(v4 + 16) -= 16i64;
				if (v10)
					break;
			}
			v6 = (_QWORD*)*v6;
			v5 = *(_QWORD***)(a1 + 456);
			if (v6 == v5)
				return;
		}
		v11 = (_QWORD*)*v6;
		v12 = (_QWORD*)v6[1];
		*v12 = *v6;
		v11[1] = v12;
		sub_14018B900((__int64)v6, 0);
		if (v7)
		{
			sub_140134750(v7, v13);
			sub_14018B900(v7, 0);
		}
	}
}
// 140137E2A: variable 'v13' is possibly undefined

