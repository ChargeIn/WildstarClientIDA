//----- (00000001404D3F40) ----------------------------------------------------
__int64 __fastcall sub_1404D3F40(__int64 a1, int a2)
{
	*(_DWORD*)(a1 + 8) = a2;
	if (a2 >= 0 && (unsigned int)(a2 - 7) <= 2)
		return sub_1404D3F60(a1);
	else
		return 2147500037i64;
}

