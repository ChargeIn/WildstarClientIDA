//----- (00000001404BDFD0) ----------------------------------------------------
void __fastcall sub_1404BDFD0(_QWORD* a1, unsigned int a2)
{
	__int64 v2; // r10

	v2 = a1[2];
	if (v2)
	{
		if (!a2 || sub_1404CA4F0((__int64)a1, a2))
		{
			*(_DWORD*)(v2 + 672) = a2;
			*(_DWORD*)(v2 + 248) = a2;
			sub_1404C6B10(v2);
		}
		(*(void(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
	}
}
// 1404BDFF3: variable 'a2' is possibly undefined
// 1404BDFF3: variable 'v2' is possibly undefined

