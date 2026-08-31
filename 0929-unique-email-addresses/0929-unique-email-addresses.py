class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        n = len(emails)

        for i in range(n):
            emails[i] = list(emails[i])

            j = 0
            while j < len(emails[i]):

                if emails[i][j] == '@':
                    break

                if emails[i][j] == '.':
                    emails[i].remove('.')
                    continue

                if emails[i][j] == '+':
                    at = emails[i].index('@')
                    del emails[i][j:at]
                    break

                j += 1

            emails[i] = ''.join(emails[i])

        return len(set(emails))