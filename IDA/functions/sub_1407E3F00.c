//----- (00000001407E3F00) ----------------------------------------------------
__int64 sub_1407E3F00()
{
	void* v0; // rax
	__int64 v1; // rbx
	DWORD CurrentThreadId; // eax

	sub_1407DBCD4();
	if ((unsigned int)sub_1407E24C8()
		&& (dword_140C0FFA8 = sub_1407E2624(), dword_140C0FFA8 != -1)
		&& (v0 = sub_1407E2BB0(1ui64, 0x478ui64), (v1 = (__int64)v0) != 0)
		&& sub_1407E2678(dword_140C0FFA8, v0))
	{
		sub_1407E3E3C(v1, 0i64);
		CurrentThreadId = GetCurrentThreadId();
		*(_QWORD*)(v1 + 8) = -1i64;
		*(_DWORD*)v1 = CurrentThreadId;
		return 1i64;
	}
	else
	{
		sub_1407E3F80();
		return 0i64;
	}
}
// 140C0FFA8: using guessed type int dword_140C0FFA8;

