//----- (000000014003ACE0) ----------------------------------------------------
void __fastcall sub_14003ACE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	__int64* v4; // rbx
	unsigned __int64 v5; // rdi
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // rcx
	int* v8; // rbp
	int* v9; // rdx

	v4 = (__int64*)a1;
	v5 = a2 | 0xF;
	if ((a2 | 0xF) == -1i64)
	{
		v5 = a2;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 24);
		v7 = v6 >> 1;
		if (v6 >> 1 > v5 / 3)
		{
			v5 = -2i64;
			if (v6 <= -2i64 - v7)
				v5 = v7 + v6;
		}
	}
	v8 = 0i64;
	if (v5 != -1i64)
	{
		v8 = sub_14018B280(v5 + 1, 0);
		if (!v8)
			sub_1407DB3DC();
	}
	if (a3)
	{
		if ((unsigned __int64)v4[3] < 0x10)
			v9 = (int*)v4;
		else
			v9 = (int*)*v4;
		sub_1407DB590(v8, v9, a3);
	}
	if ((unsigned __int64)v4[3] >= 0x10)
		sub_14018B900(*v4, 0);
	*(_BYTE*)v4 = 0;
	*v4 = (__int64)v8;
	v4[3] = v5;
	v4[2] = a3;
	if (v5 >= 0x10)
		v4 = (__int64*)v8;
	*((_BYTE*)v4 + a3) = 0;
}
// 14003AD78: conditional instruction was optimized away because rsi.8!=0

