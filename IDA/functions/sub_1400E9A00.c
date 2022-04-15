//----- (00000001400E9A00) ----------------------------------------------------
void __fastcall sub_1400E9A00(_QWORD* a1)
{
	__int64 v2; // rcx
	int* v3; // rbx
	int* v4; // rdi
	__int64 v5; // rax
	char* v7; // r14
	unsigned __int64 v8; // rbp
	_BYTE* v9; // rax
	__int64 v10; // rbx

	v2 = a1[423];
	if (v2)
	{
		(*(void (**)(void))(*(_QWORD*)v2 + 360i64))();
		v3 = (int*)&byte_140B7B700;
		if (a1[430])
			v3 = (int*)a1[430];
		v4 = 0i64;
		v5 = -1i64;
		while (*((_BYTE*)v3 + ++v5) != 0)
			;
		v7 = (char*)v3 + v5;
		v8 = v5;
		if (v5 != -2)
			v4 = sub_14018B280(v5 + 1, 0);
		sub_1407DB590(v4, v3, v8);
		v9 = (char*)v4 + v7 - (char*)v3;
		if (v9)
			*v9 = 0;
		v10 = a1[436];
		sub_1400E1580((__int64)(a1 + 421));
		sub_1400EAA10((__int64)a1, 27, (__int64)"si", v4, v10);
		if (v4)
			sub_14018B900((__int64)v4, 0);
	}
}
// 140B7B700: using guessed type char byte_140B7B700;

