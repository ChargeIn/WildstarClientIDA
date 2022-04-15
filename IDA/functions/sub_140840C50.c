//----- (0000000140840C50) ----------------------------------------------------
__int64 __fastcall sub_140840C50(struct _RTL_CRITICAL_SECTION* a1)
{
	unsigned int* OwningThread; // rbx
	__int64 result; // rax
	unsigned int v4; // ebp
	unsigned int* v5; // rdi

	OwningThread = (unsigned int*)a1[59].OwningThread;
	if (OwningThread == a1[59].LockSemaphore)
		return 1i64;
	while (1)
	{
		result = sub_14083FA10((__int64)a1, OwningThread);
		v4 = result;
		if ((_DWORD)result != 1)
			break;
		OwningThread += 10;
		if (OwningThread == a1[59].LockSemaphore)
			return result;
	}
	v5 = (unsigned int*)a1[59].OwningThread;
	if (v5 != OwningThread)
	{
		do
		{
			sub_140842320(a1, *v5);
			v5 += 10;
		} while (v5 != OwningThread);
		return v4;
	}
	return result;
}

