//----- (00000001404FE450) ----------------------------------------------------
void __fastcall sub_1404FE450(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rax
	__int64 v7; // rdx

	if (!a4
		&& (!qword_140C65898
			|| (v6 = *(_QWORD*)(a6 + 2192)) == 0
			|| (v7 = *(_QWORD*)(v6 + 16)) == 0
			|| !*(_DWORD*)(v7 + 600))
		&& a1 == *(_QWORD*)(a6 + 2176))
	{
		sub_1404FFDD0(a6);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

