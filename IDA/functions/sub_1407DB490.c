//----- (00000001407DB490) ----------------------------------------------------
__int64 __fastcall sub_1407DB490(int a1)
{
	_QWORD* v1; // rax

	v1 = &unk_14095C500;
	if (!"address family not supported")
		return 0i64;
	while (*(_DWORD*)v1 != a1)
	{
		v1 += 2;
		if (!v1[1])
			return 0i64;
	}
	return v1[1];
}

