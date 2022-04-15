//----- (00000001407DE160) ----------------------------------------------------
__int64 __fastcall sub_1407DE160(int a1)
{
	_QWORD* v2; // rax
	int* v3; // rax
	_QWORD* v4; // rax
	_DWORD* v5; // rbx
	__int64 result; // rax

	v2 = sub_1407E3DB8();
	if (v2)
		v3 = (int*)v2 + 5;
	else
		v3 = (int*)&unk_140C0F6DC;
	*v3 = a1;
	v4 = sub_1407E3DB8();
	v5 = &unk_140C0F6D8;
	if (v4)
		v5 = v4 + 2;
	result = sub_1407DE1D0(a1);
	*v5 = result;
	return result;
}

