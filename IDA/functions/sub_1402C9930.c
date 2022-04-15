//----- (00000001402C9930) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402C9930(__int64 a1)
{
	unsigned int v1; // ebx
	unsigned __int64 result; // rax
	__int64 v4; // rcx

	v1 = 0;
	result = (unsigned __int64)((unsigned __int128)((__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88))
		* (__int128)0x2E8BA2E8BA2E8BA3i64) >> 64) >> 63;
	if ((unsigned int)((*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) / 176i64))
	{
		do
		{
			sub_1402D35B0((_QWORD*)(*(_QWORD*)(a1 + 88) + 176i64 * v1));
			v4 = *(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88);
			++v1;
			result = (unsigned __int64)((unsigned __int128)(v4 * (__int128)0x2E8BA2E8BA2E8BA3i64) >> 64) >> 63;
		} while (v1 < (unsigned int)(v4 / 176));
	}
	return result;
}

