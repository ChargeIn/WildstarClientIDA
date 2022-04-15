//----- (00000001408243F0) ----------------------------------------------------
HMODULE __fastcall sub_1408243F0(const char* a1, int a2)
{
	HMODULE v3; // [rsp+20h] [rbp-18h]
	_WORD* hMem; // [rsp+28h] [rbp-10h]

	v3 = 0i64;
	hMem = sub_140825110(a1);
	if (!a1 || hMem)
		v3 = sub_140824350(hMem, a2);
	LocalFree(hMem);
	return v3;
}

