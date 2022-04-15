//----- (00000001404D6040) ----------------------------------------------------
__int64 __fastcall sub_1404D6040(__int64 a1, HWND a2, unsigned int a3, WPARAM a4, __int64 lParam)
{
	int v9; // ecx
	__int64 result; // rax

	if (a3 - 255 <= 6 && (v9 = 103, _bittest(&v9, a3 - 255)) || a3 - 512 <= 0xD)
		sub_1405DF340(qword_140C65898 + 26680);
	result = sub_140728BD0(*(_QWORD*)(a1 + 200), (__int64)a2, a3, a4, lParam);
	if (result)
		return DefWindowProcW(a2, a3, a4, lParam);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

