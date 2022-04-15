//----- (00000001407E24C8) ----------------------------------------------------
__int64 sub_1407E24C8()
{
	int v0; // esi
	_DWORD* v1; // rbx
	__int64 v2; // rdi
	__int64 v3; // rax
	struct _RTL_CRITICAL_SECTION* v4; // rcx

	v0 = 0;
	v1 = &unk_140C0F7D0;
	v2 = 36i64;
	do
	{
		if (v1[2] == 1)
		{
			v3 = v0++;
			v4 = (struct _RTL_CRITICAL_SECTION*)((char*)&unk_140C60180 + 40 * v3);
			*(_QWORD*)v1 = v4;
			InitializeCriticalSectionAndSpinCount(v4, 0xFA0u);
		}
		v1 += 4;
		--v2;
	} while (v2);
	return 1i64;
}

