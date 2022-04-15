//----- (00000001407DDB54) ----------------------------------------------------
_QWORD* __fastcall sub_1407DDB54(int a1)
{
	_QWORD* result; // rax

	result = sub_1407E3D94();
	*((_DWORD*)result + 7) = a1;
	return result;
}

