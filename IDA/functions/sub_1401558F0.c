//----- (00000001401558F0) ----------------------------------------------------
void __fastcall sub_1401558F0(__int64 a1)
{
	HIMC Context; // rax
	HIMC v3; // rbp
	DWORD CandidateListW; // edi
	struct tagCANDIDATELIST* v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // rax
	int* v8; // rdx

	if (*(_DWORD*)(a1 + 56))
	{
		Context = ImmGetContext(*(HWND*)a1);
		v3 = Context;
		if (Context)
		{
			CandidateListW = ImmGetCandidateListW(Context, 0, 0i64, 0);
			if (CandidateListW)
			{
				v5 = (struct tagCANDIDATELIST*)sub_14018B280(CandidateListW, 0);
				if (ImmGetCandidateListW(v3, 0, v5, CandidateListW))
				{
					v6 = 0i64;
					*(_DWORD*)(a1 + 448) = v5->dwCount;
					for (*(_DWORD*)(a1 + 460) = v5->dwSelection; (unsigned int)v6 < v5->dwCount; v6 = (unsigned int)(v6 + 1))
					{
						v7 = 0i64;
						v8 = (int*)((char*)v5 + v5->dwOffset[v6]);
						if (*(_WORD*)v8)
						{
							do
								++v7;
							while (*((_WORD*)v8 + v7));
						}
						sub_14001C480(a1 + 32 * ((unsigned int)v6 + 4i64), v8, (int*)((char*)v8 + 2 * v7));
					}
				}
				sub_14018B900((__int64)v5, 0);
			}
			ImmReleaseContext(*(HWND*)a1, v3);
		}
	}
}

