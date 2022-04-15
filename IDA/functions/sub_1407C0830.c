//----- (00000001407C0830) ----------------------------------------------------
__int64 __fastcall sub_1407C0830(_QWORD** a1, __int64 a2, char* a3, __int64 a4, __int64 a5)
{
	char* v9; // r10
	__int64 v10; // r11
	char v11; // al
	int* v12; // rax
	char* v13; // rcx

	if (a4)
	{
		v9 = a3;
		v10 = a4;
		do
		{
			v11 = *v9++;
			*(v9 - 1) = v11;
			--v10;
		} while (v10);
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

