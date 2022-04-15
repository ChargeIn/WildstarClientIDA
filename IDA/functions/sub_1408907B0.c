//----- (00000001408907B0) ----------------------------------------------------
void __fastcall sub_1408907B0(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
{
	__int64* v5; // rbx
	__int64 v9; // rax
	int v10; // eax

	v5 = (__int64*)(a1 + 264);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 264) + 24i64))
	{
		v9 = sub_1408904A0(a1, 0);
		v10 = sub_14088FAE0(v5, a2 - v9);
		sub_14088D2A0(*v5, v10, a3, a4, a5);
	}
}

