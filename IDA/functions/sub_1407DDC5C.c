//----- (00000001407DDC5C) ----------------------------------------------------
const char* __fastcall sub_1407DDC5C(int a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	LPVOID v5; // rax
	_BYTE* v6; // rbx
	char** v7; // rax

	v2 = sub_1407E3DB8();
	v3 = v2;
	if (!v2)
		return "Visual C++ CRT: Not enough memory to complete call to strerror.";
	if (!v2[7])
	{
		v5 = sub_1407E2BB0(0x86ui64, 1ui64);
		v3[7] = v5;
		if (!v5)
			return "Visual C++ CRT: Not enough memory to complete call to strerror.";
	}
	v6 = (_BYTE*)v3[7];
	if (a1 < 0 || a1 >= *(_DWORD*)sub_1407EA18C())
		a1 = *(_DWORD*)sub_1407EA18C();
	v7 = sub_1407EA184();
	if ((unsigned int)sub_1407EA194(v6, 134i64, v7[a1]))
	{
		sub_1407DC390();
		JUMPOUT(0x1407DDCF5i64);
	}
	return v6;
}
// 1407DDCF0: control flows out of bounds to 1407DDCF5

