//----- (000000014033E510) ----------------------------------------------------
int** __fastcall sub_14033E510(__int64 a1, int** a2, __int64 a3, _QWORD* a4, void(__fastcall**** a5)(_QWORD))
{
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rax
	void(__fastcall * **v11)(_QWORD); // rcx
	_QWORD* v12; // rax

	if (a4 == *(_QWORD**)(a1 + 8) || a3 || (unsigned __int64)*a5 < a4[4])
	{
		v9 = sub_14018B280(40i64, 0);
		if (v9 != (int*)-32i64)
		{
			v11 = *a5;
			*((_QWORD*)v9 + 4) = *a5;
			if (v11)
				(**v11)(v11);
		}
		a4[2] = v9;
		v12 = *(_QWORD**)(a1 + 8);
		if (a4 == v12)
		{
			v12[1] = v9;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v9;
		}
		else if (a4 == (_QWORD*)v12[2])
		{
			v12[2] = v9;
		}
	}
	else
	{
		v8 = sub_14033E740(a1, a5);
		a4[3] = v8;
		v9 = v8;
		v10 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD**)(v10 + 24))
			*(_QWORD*)(v10 + 24) = v9;
	}
	*((_QWORD*)v9 + 1) = a4;
	*((_QWORD*)v9 + 2) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	sub_1400081C0((__int64)v9, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v9;
	return a2;
}

