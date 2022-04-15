//----- (000000014062F230) ----------------------------------------------------
__int64 __fastcall sub_14062F230(__int64 a1, int a2)
{
	unsigned int v2; // r8d
	int* v3; // rbx
	__int64 v4; // rax
	__int64 v6; // rax

	v2 = dword_140C7E580;
	v3 = (int*)qword_140C7E578;
	v4 = 0i64;
	if (dword_140C7E580)
	{
		while (a2 != *(_DWORD*)(qword_140C7E578 + 4 * v4))
		{
			v4 = (unsigned int)(v4 + 1);
			if ((unsigned int)v4 >= dword_140C7E580)
				goto LABEL_4;
		}
		return 1i64;
	}
	else
	{
	LABEL_4:
		if (dword_140C7E580 >= (unsigned int)dword_140C7E584)
		{
			dword_140C7E584 = dword_140C7E580 + 10;
			v6 = 4i64 * (unsigned int)(dword_140C7E580 + 10);
			if (!is_mul_ok((unsigned int)(dword_140C7E580 + 10), 4ui64))
				v6 = -1i64;
			qword_140C7E578 = (__int64)sub_14018B280(v6, 0);
			sub_1407DB590((int*)qword_140C7E578, v3, 4i64 * (unsigned int)dword_140C7E580);
			sub_14018B900((__int64)v3, 0);
			v2 = dword_140C7E580;
			v3 = (int*)qword_140C7E578;
		}
		v3[v2] = a2;
		++dword_140C7E580;
		return 0i64;
	}
}
// 140C7E578: using guessed type __int64 qword_140C7E578;
// 140C7E580: using guessed type int dword_140C7E580;
// 140C7E584: using guessed type int dword_140C7E584;

