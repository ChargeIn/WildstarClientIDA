//----- (0000000140590EB0) ----------------------------------------------------
int** __fastcall sub_140590EB0(__int64 a1, int** a2, __int64 a3, _QWORD* a4, int** a5)
{
	unsigned __int16* v8; // r10
	int v9; // edx
	int v10; // ecx
	int v11; // eax
	int* v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rax

	if (a4 != *(_QWORD**)(a1 + 8) && !a3)
	{
		v8 = (unsigned __int16*)a4[4];
		LOWORD(v9) = *(_WORD*)*a5;
		v10 = (unsigned __int16)v9 - *v8;
		if (!v10)
		{
			while ((_WORD)v9)
			{
				v9 = *((unsigned __int16*)*a5 + a3 + 1);
				v11 = v8[++a3];
				v10 = v9 - v11;
				if (v9 != v11)
					goto LABEL_6;
			}
			goto LABEL_7;
		}
	LABEL_6:
		if (v10 >= 0)
		{
		LABEL_7:
			v12 = sub_14018B280(40i64, 0);
			sub_14040B4C0((int**)v12 + 4, a5);
			a4[3] = v12;
			v13 = *(_QWORD*)(a1 + 8);
			if (a4 == *(_QWORD**)(v13 + 24))
				*(_QWORD*)(v13 + 24) = v12;
			goto LABEL_13;
		}
	}
	v12 = sub_14018B280(40i64, 0);
	sub_14040B4C0((int**)v12 + 4, a5);
	a4[2] = v12;
	v14 = *(_QWORD**)(a1 + 8);
	if (a4 == v14)
	{
		v14[1] = v12;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v12;
	}
	else if (a4 == (_QWORD*)v14[2])
	{
		v14[2] = v12;
	}
LABEL_13:
	*((_QWORD*)v12 + 1) = a4;
	*((_QWORD*)v12 + 2) = 0i64;
	*((_QWORD*)v12 + 3) = 0i64;
	sub_1400081C0((__int64)v12, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v12;
	return a2;
}

