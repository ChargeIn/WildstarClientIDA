//----- (00000001402F63A0) ----------------------------------------------------
void __fastcall sub_1402F63A0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // r8d
	__int64 v3; // rax

	v2 = a2;
	if (!*(_QWORD*)(a1 + 1216) && *(_DWORD*)(a1 + 1688) != a2)
	{
		v3 = *(_QWORD*)(a1 + 1232);
		for (*(_DWORD*)(a1 + 1688) = a2; v3; v3 = *(_QWORD*)(sub_1402F63F0(v3, v2) + 1248))
			;
	}
}
// 1402F63D6: variable 'v2' is possibly undefined

