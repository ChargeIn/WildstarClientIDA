//----- (00000001407E3374) ----------------------------------------------------
void* sub_1407E3374()
{
	_QWORD* v0; // rax
	_QWORD* v1; // rdi
	void* v2; // rbx
	LPVOID lpMem; // [rsp+30h] [rbp+8h]

	v0 = sub_1407E3D94();
	v1 = v0;
	if ((dword_140C10470 & (_DWORD)v0[25]) != 0 && v0[24])
	{
		v2 = (void*)v0[23];
	}
	else
	{
		sub_1407E2340(13);
		v2 = (void*)v1[23];
		if (v2 != off_140C0FC78)
		{
			if (v2 && !_InterlockedDecrement((volatile signed __int32*)v2) && v2 != &unk_140C0FD80)
				sub_1407E14C0(v2);
			v1[23] = off_140C0FC78;
			lpMem = off_140C0FC78;
			_InterlockedIncrement((volatile signed __int32*)off_140C0FC78);
			v2 = lpMem;
		}
		sub_1407E2528(13);
	}
	if (!v2)
		sub_1407DBBD0(32);
	return v2;
}
// 140C10470: using guessed type int dword_140C10470;

