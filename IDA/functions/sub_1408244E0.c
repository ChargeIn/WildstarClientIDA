//----- (00000001408244E0) ----------------------------------------------------
HMODULE __fastcall sub_1408244E0(const char* a1, int a2)
{
	HMODULE v3; // [rsp+20h] [rbp-18h]
	WCHAR* hMem; // [rsp+28h] [rbp-10h]

	v3 = 0i64;
	hMem = sub_140825110(a1);
	if (!a1 || hMem)
		v3 = sub_140824460(hMem, a2);
	LocalFree(hMem);
	return v3;
}

