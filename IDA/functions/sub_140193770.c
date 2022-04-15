//----- (0000000140193770) ----------------------------------------------------
HMODULE __fastcall sub_140193770(__int64 a1)
{
	UINT SystemDirectoryW; // eax
	WCHAR Buffer[264]; // [rsp+20h] [rbp-228h] BYREF

	SystemDirectoryW = GetSystemDirectoryW(Buffer, 0x104u);
	if (SystemDirectoryW && (int)sub_14001B370(&Buffer[SystemDirectoryW], 260i64 - SystemDirectoryW, L"\\%s", a1) >= 0)
		return LoadLibraryW(Buffer);
	else
		return 0i64;
}
// 140A43680: using guessed type wchar_t aS_9[4];

