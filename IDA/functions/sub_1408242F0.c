//----- (00000001408242F0) ----------------------------------------------------
HMODULE __fastcall sub_1408242F0(const char* a1)
{
	HMODULE v2; // [rsp+20h] [rbp-18h]
	_WORD* hMem; // [rsp+28h] [rbp-10h]

	v2 = 0i64;
	hMem = sub_140825110(a1);
	if (!a1 || hMem)
		v2 = sub_140824270(hMem);
	LocalFree(hMem);
	return v2;
}

