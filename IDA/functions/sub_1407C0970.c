//----- (00000001407C0970) ----------------------------------------------------
__int64 __fastcall sub_1407C0970(_QWORD** a1, __int64 a2, int* a3, unsigned __int64 a4, __int64 a5)
{
	unsigned __int64 v7; // r11
	int* v10; // r10
	int v11; // eax
	int* v12; // rax
	char* v13; // rcx

	v7 = a4 >> 2;
	if (a4 >> 2)
	{
		v10 = a3;
		do
		{
			v11 = *v10++;
			*(v10 - 1) = v11;
			--v7;
		} while (v7);
	}
	v12 = sub_14018B280(48i64, 0);
	*(_QWORD*)v12 = a3;
	*((_QWORD*)v12 + 1) = a4;
	if (a4)
		v13 = (char*)*a1 - a2;
	else
		v13 = 0i64;
	*((_QWORD*)v12 + 2) = v13;
	*((_QWORD*)v12 + 5) = 0i64;
	*((_QWORD*)v12 + 4) = 0i64;
	*((_QWORD*)v12 + 3) = a5;
	*a1[2] = v12;
	a1[2] = v12 + 10;
	*a1 = (_QWORD*)((char*)*a1 + ((a4 + 15) & 0xFFFFFFFFFFFFFFF0ui64));
	return (__int64)*a1;
}

