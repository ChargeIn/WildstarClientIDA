//----- (00000001407725E0) ----------------------------------------------------
void __fastcall sub_1407725E0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rbx
	int v3; // ebp
	__int64 v5; // rax
	__int64 v6; // rdi

	v2 = 0i64;
	v3 = a2;
	while (v2 < *(_QWORD*)(a1 + 808))
	{
		v5 = *(_QWORD*)(a1 + 800);
		v6 = *(_QWORD*)(v5 + 8 * v2);
		if (*(_DWORD*)(v6 + 4) == v3)
		{
			sub_14076F7C0(*(_QWORD*)(v5 + 8 * v2), a2);
			sub_14018B900(v6, 0);
			sub_140007270(a1 + 800, v2);
		}
		else
		{
			++v2;
		}
	}
}
// 140772623: variable 'a2' is possibly undefined

