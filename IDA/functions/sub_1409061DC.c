//----- (00000001409061DC) ----------------------------------------------------
__int64 sub_1409061DC()
{
	_QWORD* v0; // rax
	_QWORD* v1; // rbx
	LPVOID v3; // rax

	v0 = sub_1407E3DB8();
	v1 = v0;
	if (v0)
	{
		if (v0[15])
			return v1[15];
		v3 = sub_1407E2C30(0x24ui64);
		v1[15] = v3;
		if (v3)
			return v1[15];
	}
	*(_DWORD*)sub_1407DE1B0() = 12;
	return 0i64;
}

